#include <stdio.h>
#include <string.h>

struct Man {
  char name[32];
  int age;
};

int main() {
  struct Man student;

  strcpy(student.name, "Ryo Murakami");
  student.age = 17;

  printf("The student's name is %s.\n", student.name);
  printf("The student is %d years old.\n", student.age);

  return 0;
}