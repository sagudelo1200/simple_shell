#include "header.h"

/**
 * getargs - get command and arguments.
 * @buffer: buffer.
 * Return: array of command and arguments.
 */
char **getargs(char *buffer)
{
	char *str = 0, *str2 = 0;
	char **array = 0, *tok = 0;
	int i = 0;

	if (buffer)
	{
		/* duplicate str to avoid strtok damage and delete /n */
		str = _strdup(buffer);
		str2 = _strdup(str);

		tok = strtok(str, " \n\t\r\v\f\a");

		/* count number of tokens */
		while (tok != NULL)
		{
			i++;
			tok = strtok(NULL, " \n\t\r\v\f\a");
		}
		array = malloc(sizeof(char *) * (i + 1));
		tok = strtok(str2, " \n\t\r\v\f\a");
		i = 0;

		/* fill array with each token */
		while (tok != NULL)
		{
			array[i] = _strdup(tok);
			i++;
			tok = strtok(NULL, " \n\t\r\v\f\a");
		}
		array[i] = NULL;

		/* free memory */
		free(str);
		free(str2);
		return (array);
	}

	return (NULL);
}

/**
 * getargs2 - get commands.
 * @buffer: buffer.
 * Return: array of commands.
 */
char **getargs2(char *buffer)
{
	char *str = 0, *str2 = 0;
	char **array = 0, *tok = 0;
	int i = 0;

	if (buffer)
	{
		/* duplicate str to avoid strtok damage and delete /n */
		str = _strdup(buffer);
		str2 = _strdup(str);

		tok = strtok(str, "\n");

		/* count number of tokens */
		while (tok != NULL)
		{
			i++;
			tok = strtok(NULL, "\n");
		}
		array = malloc(sizeof(char *) * (i + 1));
		if (!array)
			return (NULL);
		tok = strtok(str2, "\n");
		i = 0;

		/* fill array with each token */
		while (tok != NULL)
		{
			array[i] = _strdup(tok);
			i++;
			tok = strtok(NULL, "\n");
		}
		array[i] = NULL;

		/* free memory */
		free(str);
		free(str2);
		return (array);
	}

	return (NULL);
}
