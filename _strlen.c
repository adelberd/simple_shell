#include "simple_shell.h"

/**
* _strlen - get the length of the given string.
* @s: pointer string to get its length.
*
* Return: integer value (length).
*/

int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}

	return (strlen);
}