#include "header.h"

/**
 * check_path - check if program exist in path.
 * @command: command to check.
 * Return: correct program path.
 */
char *check_path(char *command)
{
	char *word, *word2, *tempstr, *tmp;
	struct stat st;

	if (!command)
	{
		return (command);
	}
	tempstr = _getenv();
	if (tempstr[0] == ':')
	{
		return (command);
	}
	tmp = _strdup(tempstr);
	word = strtok(tmp, ":");
	while (word != NULL)
	{
		word2 = malloc(_strlen(word) + 1 + _strlen(command) + 2);
		_strcpy(word2, word);
		_strcat(word2, command);
		if (stat(word2, &st) == 0 && st.st_mode & S_IXUSR)
		{
			free(tmp);
			return (word2);
		}
		free(word2);
		word = strtok(NULL, ":");
	}
	free(tmp);
	return (command);
}
