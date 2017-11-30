#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

#AC_PREREQ(2.60)
AC_INIT(efficios-demo, 0.1, joraj@efficios.com)
AC_CONFIG_SRCDIR([./])
AC_CONFIG_HEADER([config.h])
AM_INIT_AUTOMAKE(bbexample, main)

# Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_MAKE_SET

# Checks for libraries.
AM_PROG_LIBTOOL

# Set shared libraries
AC_DISABLE_STATIC
AC_ENABLE_SHARED

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CHECK_LIB([lttng-ust], [ltt_probe_register])

#AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
