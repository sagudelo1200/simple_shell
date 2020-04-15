#include "header.h"

/**
 * _getenv - get the environ value of path.
 * Return: value of path.
 */
char *_getenv(void)
{
	int i, a, e = 0;
	char *token, *tempstr;
	char *s = "PATH";

	for (i = 0; environ[i] != NULL; i++)
	{
		tempstr = malloc(_strlen(environ[i]) + 1);
		_strcpy(tempstr, environ[i]);
		token = strtok(tempstr, "=");
		while (token != NULL)
		{
			a = _strcmp(token, s);
			if (a == 0)
			{
				e = _strlen(s);
				free(tempstr);
				return (environ[i] + e + 1);
			}
			token = strtok(NULL, "=");
		}
		free(tempstr);
	}
	free(tempstr);
	return (NULL);
}

/**
 * _env - print environ variable.
 */
void _env(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
}