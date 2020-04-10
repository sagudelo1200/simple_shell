#include "header.h"
/**
 * _getline - get words.
 * @buffer: buffer.
 * Return: 0 if its ok, and -1 if its bad.
 */
int _getline(char buffer[])
{
	int i = 0;
	char buf[1];

	for (i = 0; i < 1023 && (read(STDIN_FILENO, buf, 1)) != EOF; ++i)
	{
		if (buf[0] == '\n')
		{
			buffer[i] = 0;
			return (0);
		}
		buffer[i] = buf[0];
	}
	return (-1);
}
