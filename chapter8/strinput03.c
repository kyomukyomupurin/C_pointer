#include <stdio.h>
#include <string.h>

int main() {
  char str[64];
  char* s1 = "Input a string---";
  char* s2 = "You input [%s].\n";

  while (1) {
    printf(s1);
    fgets(str, sizeof(str), stdin);

    if (strchr(str, '\n') != NULL) {
      str[strlen(str) - 1] = '\0';
    } else {
      printf("Input limit exceeded!\n");
      return -1;
    }

    if (strcmp(str, "") == 0) {
      break;
    }

    printf(s2, str);
  }

  return 0;
}