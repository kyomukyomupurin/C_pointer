#include <stdio.h>
#include <string.h>

int main() {
  char str[64];

  printf("Input a string--");
  fgets(str, sizeof(str), stdin);
  str[strlen(str) - 1] = '\0';

  printf("You input [%s].\n", str);

  return 0;
}