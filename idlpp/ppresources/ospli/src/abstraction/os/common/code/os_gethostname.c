/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2015 PrismTech
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE
 *
 *   for full copyright notice and license terms.
 *
 */
#include <string.h>

os_result
os_gethostname(
    char *hostname,
    size_t buffersize)
{
    os_result result;
    char hostnamebuf[MAXHOSTNAMELEN];

    if (gethostname (hostnamebuf, MAXHOSTNAMELEN) == 0) {
        if ((strlen(hostnamebuf)+1) > buffersize) {
            result = os_resultFail;
        } else {
            os_strncpy (hostname, hostnamebuf, buffersize);
            result = os_resultSuccess;
        }
    } else {
        result = os_resultFail;
    }

    return result;
}
