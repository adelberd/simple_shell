#include "simple_shell.h"

/**
* construct_error_message - construct error message.
* @err_mes: the error message.
* @program_name: the name of the shell program.
* @command: user command from shell.
*/

void construct_error_message(char *err_mes, char *program_name, char *command)
{
	_strcpy(err_mes, program_name);
	_strcat(err_mes, ": 1: ");
	_strcat(err_mes, command);
	_strcat(err_mes, ": not found\n");
}
