#include "common.h"\

#include <stdio.h>

void error(char *log, char *name)
{
	printf("%s:%s\n", log, name);
}