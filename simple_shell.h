#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


/* function prototypes here*/
void generate_prompt(void);
char *user_input_data();
int _strlen(char *s);
void remove_newline_char(char *str);
void execute_commands(char *user_input_data);

#endif /* SIMPLE_SHELL_H*/
