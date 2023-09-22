#include "simple_shell.h"

/**
* main - main function to run the shell program.
* @argc: counts the total number of arguments passed to main
* @argv: an array of strings, each element is a pointer to a string.
*
* Return: 0 for success.
*/

int main(__attribute__((unused)) int argc, char *argv[])
{
	char *user_input;
	char *default_path = "/bin:/usr/bin";
	char *path = getenv("PATH");

	if (path == NULL)
		path = default_path;

	while (1)
	{
		generate_prompt();
		user_input = user_input_data();
		execute_commands(user_input, path, argv[0]);

		/* Free and cleanup memory leaks */
		free(user_input);
	}

	return (0);
}
