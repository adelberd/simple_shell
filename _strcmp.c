#include "simple_shell.h"

/**
* _strcmp - custom function to compare two strings.
* @s1: first string.
* @s2: 2nd string.
*
* Return: 0 if s1 is equal to s2 lexicographically.
*/

int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
