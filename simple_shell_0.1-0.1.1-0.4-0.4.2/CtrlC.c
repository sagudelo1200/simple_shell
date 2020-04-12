#include "header.h"
/**
 * CtrC - cancel action for Ctrl+C
 * @sig: signal
 */
void  CtrlC(int sig)
{
	signal(sig, SIG_IGN);
}
