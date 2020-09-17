#include <stdio.h>

int main() {
  char* str[6] = {
    "abc",
    "de",
    "fghi",
    "jklmnop",
    "qrs",
    "tuvwxyz",
  };

  int i;

  for (i = 0; i < 6; ++i) {
    printf(str[i]);
  }

  putchar('\n');

  return 0;
}