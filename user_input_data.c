#include "simple_shell.h"

/**
* user_input_data - read user input from the shell prompt.
*
* Return: user input on success
*/

char *user_input_data()
{
	char *data_input = NULL;
	size_t buff_size = 0;

	ssize_t characters = getline(&data_input, &buff_size, stdin);

	if (characters == -1)
	{
		perror("Error, cannot read from stdin");
		exit(EXIT_FAILURE);
	}
	return data_input;
}