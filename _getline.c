#include "header.h"

/**
 * _getline - get words.
 * @buffer: buffer.
 * Return: 0 if its ok, and -1 if its bad.
 */
int _getline(char *buffer)
{
	int i = 0, a;
	static char buf[1023];
	/* reads and stores the buffer entered in console */
	a = read(STDIN_FILENO, buf, 1023);
	if (a == 0 || buffer == NULL)
	{
		return (-1);
	}

	for (i = 0; i < a; i++)
	{
		buffer[i] = buf[i];
	}
	buffer[i] = '\0';
	return (0);
}
