#include "simple_shell.h"

/**
* print_env - access the environment variables.
*/

void print_env(void)
{
	extern char **environ;
	char **env = environ;

	while (*env)
	{
		size_t len = _strlen(*env);

		write(STDOUT_FILENO, *env, len);
		write(STDOUT_FILENO, "\n", 1);
		env++;
	}
}
