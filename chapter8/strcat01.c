#include <stdio.h>
#include <string.h>

int main() {
  char name[64], sama[] = "-sama";

  printf("Input your name---");
  fgets(name, sizeof(name) - sizeof(sama), stdin);

  if (strchr(name, '\n')) {
    name[strlen(name) - 1] = '\0';
  }

  printf("Welcome, %s.\n", strcat(name, sama));

  return 0;
}