#include "simple_shell.h"

/**
* execute_commands - execute user commands from the stdin.
* @program_name: the name of the program
* @user_input: the user command to process and excute.
* @path: environment variable PATH.
*/

void execute_commands(char *user_input, char *path, char *program_name)
{
	char *args[128];
	char *executable = NULL;

	remove_newline_char(user_input);
	exit_shell(user_input);

	/* Tokenize the user input into arguments */
	tokenize_input(user_input, args);

	/* Search for executable in the PATH */
	find_executable_in_path(path, args[0], &executable);

	if (executable)
	{
		execute_executable(args, executable);
		/* free(executable); */
	} else
		handle_command_not_found(program_name, args[0]);
}
