#include "simple_shell.h"

/**
* _strcat - concatenates two strings.
* @dest: first string.
* @src: 2nd string to add to dest string.
*
* Return: dest string cooncatenated.
*/

char *_strcat(char *dest, const char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
