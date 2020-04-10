#include "header.h"
/**
 * words - converts the output into words.
 * Return: 0 if its ok, and -1 if its bad.
 */
int words(void)
{
	int get_return = 0;
	char buffer[100], *word;

	/** yellow **/
	write(STDIN_FILENO, "\033[1;33mFLAME -> $ \033[m", 22);

	get_return = _getline(buffer);
	if (get_return != -1)
	{
		word = strtok(buffer, " \t\r\n\v\f");
		while (word != NULL)
		{
			if (check_exit(word) == 0)
			{
				exit(0);
			}
			else
			{
				commands(word);
				word = strtok(NULL, " \t\r\n\v\f");
			}
		}
	}
	else
	{
		exit(-1);
	}
	return (0);
}
