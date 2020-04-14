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

	Error_msg = "\033[1;31mFLAME: \033[0;31m";
	if (file == NULL)
	{
		return (-1);
	}
	if (stat(file, &st) == -1)
	{
		/** red **/
		write(STDOUT_FILENO, Error_msg, 21);
		perror(file);
		return (-1);
	}
	return (0);
}
