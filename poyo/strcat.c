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

void my_strcat(char* str1, char* str2) {
  int len = my_strlen(str1);
  char* ptr1 = str1 + len;
  char* ptr2 = str2;

  while (*ptr2 != '\0') {
    *ptr1 = *ptr2;
    ++ptr1;
    ++ptr2;
  }

  return;
}

int main() {
  char str1[16] = "Hello, ";
  char* str2 = "World!";

  my_strcat(str1, str2);
  printf("%s\n", str1);

  return 0;
}