#include "header.h"

/**
 * commands - executes the supplied command.
 * @argv: supplied command to execute.
 */
void commands(char **argv)
{
	int status, i = 0;
	pid_t child_pid;

	check_env(argv[0]); /* validates if the command is 'env' */
	argv[0] = check_path(argv[0]); /* check if the command exists in the path */
	if (check(argv[0]) == 0)
	{
		child_pid = fork(); /* create the child process*/
		if (child_pid < 0)
			exit(-1);
		else if (child_pid == 0)
		{
			if (execve(argv[0], argv, environ) == -1)
			{
				if (errno != 0)
					perror("Error");
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
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}
