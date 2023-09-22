#include "simple_shell.h"

/**
* execute_executable - fork a new child process of the shell.
* @args: array of arguments.
* @executable: the specified executable binary.
*/

void execute_executable(char *args[], char *executable)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("Cannot create child process(fork)");
		exit(EXIT_FAILURE);
	}

	if (child_pid == 0)
	{
		execve(executable, args, NULL);
		perror("No command found:");
		free(executable);
		exit(EXIT_FAILURE);
	} else
	{
		int status;

		waitpid(child_pid, &status, 0);
		free(executable);
	}
}
