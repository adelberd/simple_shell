#include "simple_shell.h"

/**
* handle_command_not_found - Check for valid user commands.
* @program_name: the name of the shell program.
* @command: user input commands.
*/

void handle_command_not_found(char *program_name, char *command)
{
	char err_mes[128];

	construct_error_message(err_mes, program_name, command);
	write(STDERR_FILENO, err_mes, _strlen(err_mes));
	exit(EXIT_FAILURE);
}
