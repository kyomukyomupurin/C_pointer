#include <stdio.h>

int my_strlen(char* str) {
  int len = 0;
  char* ptr = str;

  while (*ptr != '\0') {
    ++ptr;
    ++len;
  }

  return len;
}

int main() {
  char* str1 = "Hello, World!";
  char str2[] = "kyomukyomupurin";

  printf("The length of %s is %d.\n", str1, my_strlen(str1));
  printf("The length of %s is %d.\n", str2, my_strlen(str2));

  return 0;
}