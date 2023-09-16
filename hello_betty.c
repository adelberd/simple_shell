#include "simple_shell.h"

/**
 * hello_betty - 'write a beatiful code that passes Betty checks'
 *
 * Return: Always 0
 */
int hello_betty(void)
{
	char *message = "Hello, Betty!\n";

	write(STDOUT_FILENO, message, _strlen(message));
	return (0);
}
