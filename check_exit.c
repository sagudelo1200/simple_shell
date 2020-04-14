#include "header.h"

/**
 * check_exit - check exit command.
 * @word: word to check.
 * Return: 0 if exit, and -1 if not.
 */
void check_exit(char *word)
{
	int i = 0, j = 0, k = 0;
	char *c_exit = "exit";

	if (word)
	{
		for (k = 0; word[k] != '\0'; k++)
			;
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
			exit(0);
		}
	}
}

/**
 * check_env - check env command.
 * @word: word to check.
 */
void check_env(char *word)
{
	int i = 0, j = 0, k = 0;
	char *c_exit = "env";

	if (word)
	{
		for (k = 0; word[k] != '\0'; k++)
			;
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
			_env();
		}
	}
}
