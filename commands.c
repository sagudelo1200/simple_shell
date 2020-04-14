#include "header.h"

/**
 * commands - executes the supplied command.
 * @argv: supplied command to execute.
 */
void commands(char **argv)
{
	int status;
	char *env_args[2] = {NULL, (char *)0}, *err_msg = "\033[0;31m";
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
			if (execve(argv[0], argv, env_args) == -1)
			{
				if (errno != 0)
				{
					write(STDOUT_FILENO, err_msg, 7);
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
			/** red **/
			write(STDOUT_FILENO, err_msg, 7);
			perror(argv[0]);
			fflush(stdout);
		}
	}
}
