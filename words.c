#include "header.h"

/**
 * words - converts the output into words.
 * Return: 0 if its ok, and -1 if its bad.
 */
int words(void)
{
	int get_return = 0, i = 0;
	char buffer[1024], **args = NULL, **args2 = NULL;

	write(STDIN_FILENO, "$ ", 2); /* yellow */

	get_return = _getline(buffer); /* get the value entered by console */
	if (get_return != -1)
	{
		if (!isatty(STDIN_FILENO))
		{
			args = getargs2(buffer); /* divide the arguments */
			while (args[i] != NULL)
			{
				args2 = getargs(args[i]); /* divide the arguments */
				commands(args2); /* the cmd is sent to execution */
				i++;
			}
		}
		else
		{
			args = getargs(buffer); /* divide the arguments */
			if (check_exit(args[0]) == 0) /* validates if the command is exit */
			{
				while (args[i])
				{
					free(args[i]);
					i++;
				}
				free(args);
				free(args2);
				exit(0);
			}
			commands(args);
		}
	}
	else
	{
		exit(-1);
	}
	return (0);
}
