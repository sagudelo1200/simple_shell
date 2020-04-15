#include "header.h"

/**
 * contokens - count the tokens.
 * @buff: pointer to string.
 * @del: delimiter.
 * Return: token numbers.
 */
int contokens(char *buff, char *del)
{
	int count;
	char *token, *aux_buff;

	aux_buff = _strdup(buff);
	token = strtok(aux_buff, del);
	for (count = 1; token != NULL; count++)
	{
		token = strtok(NULL, " \n");
	}
	free(aux_buff);
	return (count);
}

/**
 * getargs - get command and arguments.
 * @buffer: buffer.
 * Return: array of command and arguments.
 */
char **getargs(char *buffer)
{
	char *token,  **args;
	int count;
	unsigned int i;

	if (buffer)
	{
		i = contokens(buffer, " \n");
		args = malloc(i * sizeof(char *));
		if (args == NULL)
		{
			return (NULL);
		}
		token = strtok(buffer, " \t\r\f\n");
		for (count = 0; token != NULL; count++)
		{
			args[count] = malloc(_strlen(token) - 1);
			if (args[count] == NULL)
			{
				return (NULL);
			}
			_strcpy(args[count], token);
			token = strtok(NULL, " \t\r\f\n");
		}
		args[count] = NULL;
		return (args);
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
	char *token,  **args;
	int count;
	unsigned int i;

	if (buffer)
	{
		i = contokens(buffer, "\n");
		args = malloc(i * sizeof(char *));
		if (args == NULL)
		{
			return (NULL);
		}
		token = strtok(buffer, "\n");
		for (count = 0; token != NULL; count++)
		{
			args[count] = malloc(_strlen(token) - 1);
			if (args[count] == NULL)
			{
				return (NULL);
			}
			_strcpy(args[count], token);
			token = strtok(NULL, " \n");
		}
		args[count] = NULL;
		return (args);
	}
	return (NULL);
}
