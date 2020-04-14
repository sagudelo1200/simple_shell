#include "header.h"

/**
 * getargs - get command and arguments.
 * @buffer: buffer.
 * Return: array of command and arguments.
 */
char **getargs(char *buffer)
{
	char **array;

	array = malloc(sizeof(char *));
	if (array)
	{
		size_t n = 1;
		char *token, **tmp;

		token = strtok(buffer, " \t\r\n\v\f");
		while (token)
		{
			tmp = realloc(array, (n + 1) * sizeof(char *));
			if (tmp == NULL)
			{
				break;
			}
			array = tmp;
			++n;
			array[n - 2] = malloc(_strlen(token) + 1);
			if (array[n - 2] != NULL)
			{
				_strcpy(array[n - 2], token);
			}
			token = strtok(NULL, " \t\r\n\v\f");
		}
		array[n - 1] = NULL;
	}
	return (array);
}

/**
 * getargs2 - get commands.
 * @buffer: buffer.
 * Return: array of commands.
 */
char **getargs2(char *buffer)
{
	char **array;

	array = malloc(sizeof(char *));
	if (array)
	{
		size_t n = 1;
		char *token, **tmp;

		token = strtok(buffer, "\n");
		while (token)
		{
			tmp = realloc(array, (n + 1) * sizeof(char *));
			if (tmp == NULL)
			{
				break;
			}
			array = tmp;
			++n;
			array[n - 2] = malloc(_strlen(token) + 1);
			if (array[n - 2] != NULL)
			{
				_strcpy(array[n - 2], token);
			}
			token = strtok(NULL, "\n");
		}
		array[n - 1] = NULL;
	}
	return (array);
}