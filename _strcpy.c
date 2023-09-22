#include "simple_shell.h"

/**
* _strcpy - a function to copy the string pointed to by src.
* @dest: pointer to copy to.
* @src: string to copy.
*
* Return: string dest.
*/

char *_strcpy(char *dest, const char *src)
{
	char *original_dest;

	if (dest == NULL || src == NULL)
		return (NULL);

	original_dest = dest;
	while (1)
	{
		char current_char = *src;

		*dest = current_char;

		if (current_char == '\0')
			break;

		src++;
		dest++;
	}

	return (original_dest);
}
