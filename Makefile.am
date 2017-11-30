AUTOMAKE_OPTIONS = foreign

CFLAGS = -Wall -pedantic
include_HEADERS = bbexample.h

lib_LTLIBRARIES = libbbexample.la
libbbexample_la_SOURCES  = foo.c tp.c
libbbexample_la_LDFLAGS = -llttng-ust -version-info 1:0:0
