#include "simple_shell.h"

/**
* tokenize_input - tokenize the user input into arguments.
*
* @user_input: user command sfrom the shell prompt.
* @args: array to tokenize user input into.
*/

void tokenize_input(char *user_input, char *args[])
{
	int i = 0;
	char *token;

	for (token = strtok(user_input, " ");
			token != NULL;
			token = strtok(NULL, " "))
		args[i++] = token;

	args[i] = NULL;

}
