#include "header.h"
/**
 * _getenv - obtain the environment variable
 *
 * Return: 0 success
 */
void *_getenv()
{
	int i = 1;

	char *s = *environ;

	for (; s; i++)
	{
		printf("%s\n", s);
		s = *(environ + i);
	}
	return (0);
}