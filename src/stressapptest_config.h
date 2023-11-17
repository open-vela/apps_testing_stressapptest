/****************************************************************************
 * apps/testing/stressapptest/stressapptest_config.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/* src/stressapptest_config.h.in.
 * Generated from configure.ac by autoheader.
 */

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/* Define to 1 if the `closedir' function returns void instead of int. */

#undef CLOSEDIR_VOID

/* Define to 1 if you have the <arpa/inet.h> header file. */

#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
 * don't.
 */

#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */

#define HAVE_DIRENT_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */

#undef HAVE_DOPRNT

/* Define to 1 if you have the <fcntl.h> header file. */

#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `ftruncate' function. */

#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `gettimeofday' function. */

#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */

#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <libaio.h> header file. */

#undef HAVE_LIBAIO_H

/* Define to 1 if you have the `memset' function. */

#define HAVE_MEMSET 1

/* Define to 1 if you have the `mmap64' function. */

#define HAVE_MMAP64 1

/* Define to 1 if you have the `munmap' function. */

#define HAVE_MUNMAP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */

#undef HAVE_NDIR_H

/* Define to 1 if you have the <netdb.h> header file. */

#define HAVE_NETDB_H 1

/* Define to 1 if you have the `posix_memalign' function. */

#define HAVE_POSIX_MEMALIGN 1

/* Define to 1 if the system has `pthread_barrier'. */

#undef HAVE_PTHREAD_BARRIERS

/* Define to 1 if you have the <pthread.h> header file. */

#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the `pthread_rwlockattr_setkind_np' function. */

#undef HAVE_PTHREAD_RWLOCKATTR_SETKIND_NP

/* Define to 1 if you have the `rand_r' function. */

#define HAVE_RAND_R 1

/* Define to 1 if you have the `sched_getaffinity' function. */

#ifdef CONFIG_SMP
#define HAVE_SCHED_GETAFFINITY 1
#endif

/* Define to 1 if you have the `select' function. */

#define HAVE_SELECT 1

/* Define to 1 if you have the `socket' function. */

#define HAVE_SOCKET 1

/* Define to 1 if stdbool.h conforms to C99. */

#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */

#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */

#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */

#define HAVE_STDLIB_H 1

/* Define if you have `strerror_r'. */

#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */

#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */

#define HAVE_STRING_H 1

/* Define to 1 if you have the `strtol' function. */

#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoull' function. */

#define HAVE_STRTOULL 1

/* Define to 1 if you have the <sys/dir.h> header file,
 * and it defines `DIR'.
 */

#undef HAVE_SYS_DIR_H

/* Define to 1 if you have the <sys/ioctl.h> header file. */

#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/ndir.h> header file,
 * and it defines `DIR'.
 */

#undef HAVE_SYS_NDIR_H

/* Define to 1 if you have the <sys/select.h> header file. */

#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/shm.h> header file. */

#define HAVE_SYS_SHM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */

#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */

#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */

#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */

#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */

#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vprintf' function. */

#define HAVE_VPRINTF 1

/* Define to 1 if the system has the type `_Bool'. */

#define HAVE__BOOL 1

/* Name of package */

#define PACKAGE "stressapptest"

/* Define to the address where bug reports for this package should be sent. */

#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */

#define PACKAGE_NAME "stressapptest"

/* Define to the full name and version of this package. */

#define PACKAGE_STRING "v1.0.11"

/* Define to the one symbol short name of this package. */

#undef PACKAGE_TARNAME

/* Define to the home page for this package. */

#undef PACKAGE_URL

/* Define to the version of this package. */

#define PACKAGE_VERSION "v1.0.11"

/* Define as the return type of signal handlers (`int' or `void'). */

#define RETSIGTYPE void

/* Define to the type of arg 1 for `select'. */

#define SELECT_TYPE_ARG1 int

/* Define to the type of args 2, 3 and 4 for `select'. */

#define SELECT_TYPE_ARG234 (fd_set *)

/* Define to the type of arg 5 for `select'. */

#define SELECT_TYPE_ARG5 (struct timeval *)

/* Define to 1 if all of the C90 standard headers exist (not just the ones
 * required in a freestanding environment). This macro is provided for
 * backward compatibility; new code need not use it.
 */

#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */

#undef STRERROR_R_CHAR_P

/* Defined if the target CPU is aarch64 */

#if defined(CONFIG_ARCH_ARM64)
#define STRESSAPPTEST_CPU_AARCH64
#endif

/* Defined if the target CPU is armv7a */

#if defined(CONFIG_ARCH_ARMV7A)
#define STRESSAPPTEST_CPU_ARMV7A
#endif

/* Defined if the target CPU is i686 */

#if defined(CONFIG_ARCH_X86)
#define STRESSAPPTEST_CPU_I686
#endif

/* Defined if the target CPU is LOONGARCH */

#undef STRESSAPPTEST_CPU_LOONGARCH

/* Defined if the target CPU is MIPS */

#if defined(CONFIG_ARCH_MIPS)
#define STRESSAPPTEST_CPU_MIPS
#endif

/* Defined if the target CPU is PowerPC */
#undef STRESSAPPTEST_CPU_PPC

/* Defined if the target CPU is x86_64 */

#if defined(CONFIG_ARCH_X86_64)
#define STRESSAPPTEST_CPU_X86_64
#endif

/* Defined if the target OS is BSD based */

#undef STRESSAPPTEST_OS_BSD

/* Defined if the target OS is OSX */

#undef STRESSAPPTEST_OS_DARWIN

/* Defined if the target OS is Linux */

#define STRESSAPPTEST_OS_LINUX 1

/* Timestamp when ./configure was executed */

#define STRESSAPPTEST_TIMESTAMP "2020-07-28 15:07:04 +0800"

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. This
 * macro is obsolete.
 */

#define TIME_WITH_SYS_TIME 1

/* Version number of package */

#define VERSION "v1.0.11"

#ifdef CONFIG_FS_LARGERFILE

/* Number of bits in a file offset, on hosts where this is settable. */

#define _FILE_OFFSET_BITS 64

/* Define for large files, on AIX-style hosts. */

#define _LARGE_FILES 1
#else
#define _FILE_OFFSET_BITS 32
#endif

/* Define to empty if `const' does not conform to ANSI C. */

#undef const

/* Define to `__inline__' or `__inline' if that's what the C compiler
 * calls it, or to nothing if 'inline' is not supported under any name.
 */

#ifndef __cplusplus
#undef inline
#endif

/* Define as a signed integer type capable of holding a process identifier. */

#undef pid_t

/* Define to the equivalent of the C99 'restrict' keyword, or to
 * nothing if this is not supported.  Do not define if restrict is
 * supported only directly.
 */

#undef restrict

/* Work around a bug in older versions of Sun C++, which did not
 * #define __restrict__ or support _Restrict or __restrict__
 * even though the corresponding Sun C compiler ended up with
 * "#define restrict _Restrict" or "#define restrict __restrict__"
 * in the previous line.  This workaround can be removed once
 * we assume Oracle Developer Studio 12.5 (2016) or later.
 */

#if defined __SUNPRO_CC && !defined __RESTRICT && !defined __restrict__
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */

#undef size_t

/* Define to `int' if <sys/types.h> does not define. */

#undef ssize_t

/* Define to the type of an unsigned integer type of width exactly 16 bits if
 * such a type exists and the standard includes do not define it.
 */

#undef uint16_t

/* Define to empty if the keyword `volatile' does not work. Warning: valid
 * code using `volatile' can become incorrect without. Disable with care.
 */

#undef volatile
