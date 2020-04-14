#include "header.h"
/**
 * check_exit - check exit command.
 * @word: word to check.
 * Return: 0 if exit, and -1 if not.
 */
int check_exit(char *word)
{
	int i = 0, j = 0, k = 0;
	char *c_exit = "exit";

	if (word == NULL)
	{
		return (-1);
	}
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
		return (0);
	}
	else
	{
		return (-1);
	}
}
