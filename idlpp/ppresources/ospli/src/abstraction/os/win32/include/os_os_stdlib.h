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
#ifndef OS_WIN32_STDLIB_H
#define OS_WIN32_STDLIB_H

#if defined (__cplusplus)
extern "C" {
#endif

#define OS_OS_FILESEPCHAR '\\'
#define OS_OS_PATHSEPCHAR ';'
#define OS_OS_EXESUFFIX   ".exe"
#define OS_OS_BATSUFFIX   ".bat"
#define OS_OS_LIB_LOAD_PATH_VAR "PATH"

#define OS_ROK (_S_IREAD)
#define OS_WOK (_S_IWRITE)
#define OS_XOK (_S_IEXEC)
#define OS_FOK (0)

#define OS_ISDIR(mode) (mode & _S_IFDIR)
#define OS_ISREG(mode) (mode & _S_IFREG)
#define OS_ISLNK(mode) (0) /* not supported on this platform */

/* on this platform these permission masks are don't cares! */
#define S_IRWXU 00700
#define S_IRWXG 00070
#define S_IRWXO 00007

/* The value _POSIX_PATH_MAX is defined in limits.h, however you have
 * to define _POSIX_ during compilation.This again will remove the
 * _read, _open and _close prototypes!
 */
#define OS_PATH_MAX 255

typedef HANDLE os_os_dirHandle;

#define MAXHOSTNAMELEN MAX_HOSTNAME_LEN

OS_API extern char *optarg;
OS_API extern int optind, opterr;

OS_API int getopt (int argc, char **argv, const char *options);


#if defined (__cplusplus)
}
#endif

#endif /* OS_WIN32_STDLIB_H */
