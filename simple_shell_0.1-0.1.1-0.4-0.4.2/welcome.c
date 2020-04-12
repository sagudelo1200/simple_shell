#include "header.h"
/**
 * welcome - print a welcome banner.
 */
void welcome(void)
{
	printf("\033[1;1H\033[2J");
	printf("\033[1;31m");
	printf(" _____ __    _____ _____ _____      ) \n");
	printf("|   __|  |  |  _  |     |   __|    ) \\ \n");
	printf("|   __|  |__|     | | | |   __|   / ) ( \n");
	printf("|__|  |_____|__|__|_|_|_|_____|   \\(_)/ \n");
	printf("________________________________________\n");
	printf("\n");
	printf("\033[m");
}

