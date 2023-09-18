#include "simple_shell.h"

/**
* main - main function to run the shell program.
*
* Return: 0 for success.
*/

int main(void)
{
	char *user_input;

	while (1)
	{
		generate_prompt();
		user_input = user_input_data();
		execute_commands(user_input);

		/* Free and cleanup memory leaks */
		free(user_input);
	}

	return (0);
}
