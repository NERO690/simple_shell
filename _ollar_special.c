#include "shell.h"

static int EXIT_CODE;
static int no_init_exit_code = 1;

/**
 * returns the exit code and output the value
 *
 * 
*/
int *process_exit_code()
{
	if (no_init_exit_code)
	{
		EXIT_CODE = 0;
		no_init_exit_code = 0;
	}

	return (&EXIT_CODE);
}

/**
 * This would set the exit -code and out the exit code
 * @code: Number representing exit code
*/
void set_process_exit_code(int code)
{
	EXIT_CODE = code;
}
