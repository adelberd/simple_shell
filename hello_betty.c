#include <stdio.h>
#include <stdlib.h>

/**
 * main - 'write a beatiful code that passes Betty checks'
 *
 * Return: Always 0
 */
int main(void)
{
	char *message = "Hello, Betty!"\n;

	write(STDOUT_FILENO, message, strlen(message));
	return (0);
}
