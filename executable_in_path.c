#include "simple_shell.h"

/**
* find_executable_in_path - function to check the env PATH.
* @path: the environment variable PATH,
* @command: user command from the shell.
* @executable: the exec file.
*/

void find_executable_in_path(char *path, char *command, char **executable)
{
	char *path_cpy = _strdup(path);
	char *token;

	for (token = strtok(path_cpy, ":");
			token != NULL;
			token = strtok(NULL, ":"))
	{
		char buffer[1024];

		_strncpy(buffer, token, sizeof(buffer) - 1);
		_strncat(buffer, "/", sizeof(buffer) - _strlen(buffer) - 1);
		_strncat(buffer, command, sizeof(buffer) - _strlen(buffer) - 1);

		if (access(buffer, X_OK) == 0)
		{
			*executable = _strdup(buffer);
			break;
		}
	}
	free(path_cpy);
}
