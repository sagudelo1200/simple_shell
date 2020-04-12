#include "header.h"

void *_getenv()
{
	int i = 1;

	char *s = *environ;

  	for (; s; i++)
	{
		printf("%s\n", s);
		s = *(environ+i);
	}
	return 0;
}