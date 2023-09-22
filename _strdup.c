#include "simple_shell.h"

/**
* _strdup - returns a pointer to a new string that is a duplicate
*	    of another string.
* @str: str to duplicate.
*
* Return: NULL if str is null otherwise a pointer a duplicate.
*/

char *_strdup(char *str)
{
	int i, j, len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = str[i];

	ptr[len] = '\0';

	return (ptr);
}
