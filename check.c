#include "header.h"
/**
 * check - check files.
 * @file: supplied file to check.
 * Return: 0 if its ok, and -1 if its bad.
 */
int check(char *file)
{
	struct stat st;

	if (file == NULL)
	{
		return (-1);
	}
	if (stat(file, &st) == 0 && (st.st_mode & S_IXUSR))
	{
		return (0);
	}
	return (-1);
}
