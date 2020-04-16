#include "header.h"

/**
 * words - converts the output into words.
 * Return: 0 if its ok, and -1 if its bad.
 */
int words(void)
{
	int get_return = 0, i = 0;
	char buffer[1024], **args, **args2;

	write(STDIN_FILENO, "\033[1;31mFLAME -> $ \033[0m", 22);

	get_return = _getline(buffer);
	if (get_return != -1)
	{
		if (!isatty(STDIN_FILENO))
		{
			args = getargs2(buffer);
			while (args[i] != NULL)
			{
				args2 = getargs(args[i]);
				commands(args2);
				i++;
			}
		}
		else
		{
			args = getargs(buffer);
			commands(args);
		}
	}
	else
	{
		exit(-1);
	}
	return (0);
}
