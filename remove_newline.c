#include "simple_shell.h"

/**
* remove_newline_char - replace newline character '\n', at the end of the user
*			command with the null terminating character '\0'.
*
* @str: string to check newline character from.
*/

void remove_newline_char(char *str)
{
	size_t length = _strlen(str);

	if (length > 0 && (str[length - 1] == '\n'))
		str[length - 1] = '\0';
}
