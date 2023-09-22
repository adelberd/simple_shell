#include "simple_shell.h"

/**
* _strncat - concatenates two strings.
* @dest: first string.
* @src: second string.
* @n: number of src bytes to append to dest.
*
* Return: dest.
*/

char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = 0;
	size_t i = 0;

	if (dest == NULL || src == NULL || n == 0)
		return (NULL);

	while (dest[dest_len] != '\0')
		dest_len++;

	while (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
