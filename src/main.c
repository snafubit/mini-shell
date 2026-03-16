#include <stdio.h>

int main () {

  while (1) {
      printf("myshell> ");
      fgets(input, 1024, stdin);
  
      char **args = parse_input(input);
  
      execute_command(args);
  }
  
  return 0;
}
