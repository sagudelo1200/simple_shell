#include "header.h"
/**
 * commands - executes the supplied command.
 * @command: supplied command to execute.
 */
void commands(char *command)
{
	int status;
	char *argv[2];
	pid_t child_pid;

	argv[0] = command;
	argv[1] = NULL;

	printf("%s\n", command);
	if (check(argv[0]) == 0)
	{
		child_pid = fork();
		if (child_pid < 0)
		{
			exit(-1);
		}
		else if (child_pid == 0)
		{
			printf("%s\n", command);
			if (execve(argv[0], argv, NULL) == -1)
			{
				exit(-1);
			}
		}
		else
		{
			wait(&status);
		}
	}
}
