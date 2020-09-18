#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main() {
  char* pc;

  pc = (char*)calloc(16, sizeof(char));
  if (!pc) {
    perror("Memory allocation failed\n");
    return -1;
  }

  strcpy(pc, "qwerty");
  printf("%s\n", pc);

  free(pc);

  return 0;
}