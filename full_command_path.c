#include "simple_shell.h"

void execute_command(char *command, char *path[])
{
	char *full_command_path = get_command_path(command, path);

	if (full_command_path == NULL)
	{
		char error_message[] = "command not found:";

		write(STDERR_FILENO, command, strlen(command));
		write(STDERR_FILENO, "\n", 1);
		return;
	}

	pid_t pid = fork();

	if (pid == 0)
	{
		execv(full_command_path, NULL);
		char error_message[] = "Execution failed\n";

		write(STDERR_FILENO, error_message, sizeof(error_message) - 1);

		exit(EXIT_FAILURE);
	}
	else if (pid > 0)
	{
		int status;

		wait(&status);
	}
	else
	{
		char error_message[] = "fork failed\n";

		write(STDERR_FILENO, error_message, sizeof(error_message) - 1);
	}

	free(full_command_path);
}
