#include "simple_shell.h"

/**
* generate_prompt - display the shell propmt
*
*/

void generate_prompt()
{
  char shell_prompt[] = "alxShell$ ";
  write(STDOUT_FILENO, shell_prompt, sizeof(shell_prompt) - 1);
}