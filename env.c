#include "simple_shell"

void execute_command(char *command, char *paths[])
{
	if (strcmp(command, "exit") == 0)
		exit(EXIT_SUCCESS);

	if (strcmp(command, "env") == 0)

		char **env = environ;

		while (*env != NULL)
			write("%s\n", *env);

		return (0);
}
