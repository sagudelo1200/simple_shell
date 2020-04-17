#include "header.h"

/**
 * check_exit - check exit command.
 * @word: word to check.
 * Return: 0 if exit, and -1 if not.
 */
int check_exit(const char *word)
{
	int i = 0, j = 0, k = 0;
	char *c_exit = "exit";

	if (word)
	{
		for (k = 0; k < _strlen(word) && word[k]; k++)
			;
		for (i = 0; word[i] != '\0'; i++)
		{
			if (word[i] == c_exit[i])
			{
				j++;
			}
			k--;
		}
		if (i == j && k == 0)
		{
			return (0);
		}
	}
	return (-1);
}

/**
 * check_env - check env command.
 * @word: word to check.
 * Return: 0 if OK, -1 if not.
 */
int check_env(const char *word)
{
	int i = 0, j = 0, k = 0;
	char *c_exit = "env";

	if (word)
	{
		while (word[k])
			k++;
		for (i = 0; c_exit[i] != '\0'; i++)
		{
			if (word[i] == c_exit[i])
			{
				j++;
			}
			k--;
		}
		if (i == j && k == 0)
		{
			return (0);
		}
	}
	return  (-1);
}
