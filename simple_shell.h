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
void execute_commands(char *user_input, char *path, char *program_name);
char *_strdup(char *str);
void construct_error_message(char *err_mes, char *program_name, char *command);
char *_strncat(char *dest, const char *src, size_t n);
char *_strcpy(char *dest, const char *src);
char *_strncpy(char *dest, const char *src, size_t n);
int _strcmp(const char *s1, const char *s2);
void exit_shell(char *user_input_data);
void print_env(void);
void tokenize_input(char *user_input, char *args[]);
void find_executable_in_path(char *path, char *command, char **executable);
void execute_executable(char *args[], char *executable);
void handle_command_not_found(char *program_name, char *command);
char *_strcat(char *dest, const char *src);

#endif /* SIMPLE_SHELL_H*/
