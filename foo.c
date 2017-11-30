#include <stdio.h>
#define TRACEPOINT_DEFINE
#include "tp.h"

void foo(void)
{
	tracepoint(hello_world, my_first_tracepoint, 2 , "Hello world");
	puts("Hello, I'm a shared library");
}
