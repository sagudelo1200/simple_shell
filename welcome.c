#include "header.h"
/**
 * welcome - print a welcome banner.
 */
void welcome(void)
{
	write(STDOUT_FILENO, "\033[1;1H\033[2J", 10);
	write(STDOUT_FILENO, "\033[1;31m", 8);
	write(STDOUT_FILENO, " _____ __    _____ _____ _____      ) \n", 40);
	write(STDOUT_FILENO, "|   __|  |  |  _  |     |   __|    ) \\ \n", 41);
	write(STDOUT_FILENO, "|   __|  |__|     | | | |   __|   / ) ( \n", 41);
	write(STDOUT_FILENO, "|__|  |_____|__|__|_|_|_|_____|   \\(_)/ \n", 42);
	write(STDOUT_FILENO, "________________________________________\n", 41);
	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, "\033[m", 3);
}
