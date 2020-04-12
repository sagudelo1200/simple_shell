#include "header.h"
/**
 * check_env - check env command.
 * @word: word to check.
 * Return: 0 success, and -1 if error.
 */
int check_env(char *word)
{
	int i = 0, j = 0, k = 0;
	char *c_env = "env";

	if (word == NULL)
	{
		return (-1);
	}
	for (k = 0; word[k] != '\0'; k++)
	;
	for (i = 0; c_env[i] != '\0'; i++)
	{
		if (word[i] == c_env[i])
		{
			j++;
		}
		k--;
	}
	if (i == j && k == 0)
	{
		_getenv();
		return (0);
	}
	else
	{
		return (-1);
	}
}
