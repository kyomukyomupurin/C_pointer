#include <stdio.h>

int main() {
  char buffer[128], name[] = "Ryo Murakami";

  int age = 28;
  double bl = 172.0;
  double bw = 58.0;

  sprintf(buffer, "name ---%s\n", name);
  printf(buffer);

  sprintf(buffer, "age ---%d\n", age);
  printf(buffer);

  sprintf(buffer, "tall (cm) ---%5.1f\n", bl);
  printf(buffer);

  sprintf(buffer, "weight (kg) ---%5.1f\n", bw);
  printf(buffer);

  sprintf(buffer, "\n%s's(age %d) profile\n%5.1f tall, weights%5.1f kg, BMI is %4.1f\n", name, age, bl, bw, bw * (10000.0) / (bl * bl));
  printf(buffer);

  return 0;
}