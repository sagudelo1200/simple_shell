#include "header.h"

/**
 * sigintHandler - print the prompt when capturing the interrupt signal.
 * @sig_num: signal number.
 */
void sigintHandler(int sig_num __attribute__((unused)))
{
	write(STDOUT_FILENO, "\n", 1);
	write(STDIN_FILENO, "\033[1;31mFLAME -> $ \033[0m", 22);
}

/**
 * main - main function.
 * Return: 0.
 */
int main(void)
{
	signal(SIGINT, sigintHandler);
	if (!isatty(STDIN_FILENO))
	{
		fflush(stdout);
	}
	while (1)
	{
		words();
	}
	return (0);
}
