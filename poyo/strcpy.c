#include <stdio.h>

void my_strcpy(char* str1, char* str2) {
  char* ptr1 = str1;
  char* ptr2 = str2;

  while (*ptr2 != '\0') {
    *ptr1 = *ptr2;
    ++ptr1;
    ++ptr2;
  }

  // while (*ptr1++ = *ptr2++) {} also works

  return;
}

int main() {
  char str1[32];
  char* str2 = "Hello, World!";

  my_strcpy(str1, str2);

  printf("%s\n", str1);
  printf("%s\n", str2);

  return 0;
}