#include "header.h"
/**
 * check - check files.
 * @file: supplied file to check.
 * Return: 0 if its ok, and -1 if its bad.
 */
int check(char *file)
{
	struct stat st;
	char *Error_msg = NULL;

	Error_msg = "\033[0;31mFlame: No such file or directory.\033[m\n";
	if (stat(file, &st) == -1)
	{
		/** red **/
		write(STDIN_FILENO, Error_msg, 44);
		return (-1);
	}
	return (0);
}
