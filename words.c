#include "header.h"

/**
 * free_exit - free memory
 * @args: memory
 */
void free_exit(char **args)
{
	int i = 0;

	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
	exit(0);
}
/**
 * words - converts the output into words.
 * Return: 0 if its ok, and -1 if its bad.
 */
int words(void)
{
	int get_return = 0, i = 0, j = 0, status = 0;
	char buffer[1024], **args = NULL, **args2 = NULL;

	write(STDIN_FILENO, "$ ", 2);

	get_return = _getline(buffer); /* get the value entered by console */
	if (get_return != -1)
	{
		if (!isatty(STDIN_FILENO))
		{
			args = getargs2(buffer); /* divide the arguments */
			while (args[i] != NULL)
			{
				args2 = getargs(args[i]); /* divide the arguments */
				status = commands(args2);		  /* the cmd is sent to execution */
				i++;
			}
			j = 0;
			while (args[j])
			{
				free(args[j]);
				j++;
			}
			free(args);
		}
		else
		{
			i = 0;
			args = getargs(buffer);		  /* divide the arguments */
			if (check_exit(args[0]) == 0) /* validates if the command is exit */
				free_exit(args);
			status = commands(args);
		}
	}
	else
	{
		exit(status);
	}
	return (0);
}
