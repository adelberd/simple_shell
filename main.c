#include "simple_shell.h"

/**
* main - main function to run the shell program.
*
* Return: 0 for success.
*/

int main(void)
{
	while (1)
	{
		generate_prompt();

		char *user_input = user_input_data();

		execute_commands(user_input);

		/* Free and cleanup memory leaks */
		free(user_input);
	}

	return (0);
}