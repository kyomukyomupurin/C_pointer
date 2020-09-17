#include <stdio.h>

int myfunc(char* str1, char* str2) {
  printf("%s is %s\n", str1, str2);
  return 0;
}

int main() {
  int (*ptr)();

  ptr = myfunc;

  (*myfunc)("Tanaka", "Student");
  (*ptr)("Yamada", "Teacher");
  myfunc("Sato", "Minister");

  return 0;
}