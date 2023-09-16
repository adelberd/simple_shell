#include "simple_shell.h"

/**
* execute_commands - execute user commands from the stdin.
*
* @user_input_data: the user command to process and excute.
*/

void execute_commands(char *user_input_data)
{
	/* Delete the last newline character and equate it to null terminator */
	remove_newline_char(user_input_data);

	/* Create a new child shell process */
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("A new child process cannot be created {fork()}");
		exit(EXIT_FAILURE);
	}

	if (child_pid == 0)
	{
		char *shell_command = strtok(user_input_data, " ");
		char *args[128];
		int i;

		i = 0;
		while (shell_command != NULL)
		{
			args[i++] = shell_command;
			shell_command = strtok(NULL, " ");
		}

		args[i] = NULL;

		/* Execute the command */
		execve(args[0], args, NULL);

		perror("No such command found");
		exit(EXIT_FAILURE);

	} else
	{
		/* Wait for the child process to finish */
		int status;

		waitpid(child_pid, &status, 0);
	}
}
