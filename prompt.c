#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_COMMAND_LENGTH 100

int main(void)
{
	char command[MAX_COMMAND_LENGTH];

	while (1)
	{
		printf("my_shell> ");
		if ( !fgets(command, sizeof(command), stdin))
		{
			printf("\nGoodbye!\n");
			break;
		}
		command[strlen(command) - 1] = '\0';

		if (strcmp(command, "exit") == 0)
		{	
		break;
		}

		pid_t pid = fork();
		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			char *program = strtok(command, " ");
			char *args[MAX_COMMAND_LENGTH];
			int i = 0;
			while ((args[i] = strtok(NULL, " ")) != NULL)
			{
				i++;
			}
			args[i] = NULL;

			execvp(program, args);

			perror("execvp");
			exit(EXIT_FAILURE);
		}
		else
		{
			int status;
			if (waitpid(pid, &status, 0) == -1)
			{
				perror("waitpid");
				exit(EXIT_FAILURE);
			}
		}
	}

	return 0;
}
	
	

