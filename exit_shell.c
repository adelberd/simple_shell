#include "simple_shell.h"

/**
* exit_shell - function to quit the shell with exit command.
*
* @user_input_data: user input from the shell prompt.
*/

void exit_shell(char *user_input_data)
{
	if (_strcmp(user_input_data, "exit") == 0)
	{
		write(STDOUT_FILENO, "Exiting the shell...\n", 22);
		free(user_input_data);
		exit(EXIT_SUCCESS);
	}

	if (_strcmp(user_input_data, "env") == 0)
	{
		print_env();
		/* free(user_input_data); */
		return;
	}
}
