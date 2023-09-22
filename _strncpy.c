#include "simple_shell.h"

/**
* _strncpy - copy a string into another string.
* @dest: string to copy into.
* @src: string to be copied.
* @n: number of null bytes to be copied.
*
* Return: dest string.
*/

char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t j = 0;

	if (dest == NULL || src == NULL || n == 0)
		return (NULL);

	while (j < n - 1 && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	dest[j] = '\0'; /* Ensure null-terminated string */

	return (dest);
}
