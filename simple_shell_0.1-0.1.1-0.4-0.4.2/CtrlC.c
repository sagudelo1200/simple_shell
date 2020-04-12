#include "header.h"
/**
 * CtrC - cancel action for Ctrl+C
 * @sig: signal
 */
void  CtrlC(int sig)
{
	write(STDOUT_FILENO, "$", 1);
	signal(sig, SIG_IGN);

	if (words())
		printf("words\n");
	else
		signal(SIGINT, CtrlC);
}
