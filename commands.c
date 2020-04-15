#include "header.h"

/**
 * commands - executes the supplied command.
 * @argv: supplied command to execute.
 */
void commands(char **argv)
{
	int status;
	pid_t child_pid;

	check_exit(argv[0]);
	check_env(argv[0]);
	argv[0] = check_path(argv[0]);
	if (check(argv[0]) == 0)
	{
		child_pid = fork();
		if (child_pid < 0)
		{
			exit(-1);
		}
		else if (child_pid == 0)
		{
			if (execve(argv[0], argv, environ) == -1)
			{
				if (errno != 0)
				{
					perror("Error");
				}
			}
		}
		else
		{
			wait(&status);
		}
	}
	else
	{
		if (errno != 0 && argv[0] != NULL)
		{
			perror(argv[0]);
			fflush(stdout);
		}
	}
}
