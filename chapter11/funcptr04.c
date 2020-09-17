#include <stdio.h>
#include <stdlib.h>

const double pi = 3.141592653589793;

double triangle() {
  char str[32];
  double bottom, height;
  printf("Bottom = ");
  fgets(str, sizeof(str), stdin);
  bottom = atof(str);
  printf("Height = ");
  fgets(str, sizeof(str), stdin);
  height = atof(str);

  return bottom * height / 2.0;
}

double trapezoid() {
  char str[32];
  double upper_base, lower_base, height;
  printf("Upper base = ");
  fgets(str, sizeof(str), stdin);
  upper_base = atof(str);
  printf("Lower base = ");
  fgets(str, sizeof(str), stdin);
  lower_base = atof(str);
  printf("Height = ");
  fgets(str, sizeof(str), stdin);
  height = atof(str);

  return (upper_base + lower_base) * height / 2.0;
}

double circle() {
  char str[32];
  double radius;
  printf("Radius = ");
  fgets(str, sizeof(str), stdin);
  radius = atof(str);

  return (radius * radius) * pi;
}

int main() {
  double (*fn[3])() = {triangle, trapezoid, circle};
  char ret[8];
  int fnno;

  while (1) {
    printf("Which you want to calculate?\n(1: Triangle 2: Trapezoid 3: Triangle 0: Fnish)--");
    fgets(ret, sizeof(ret), stdin);

    if (ret[0] < '0' || ret[0] > '3') {
      printf("Invalid input\n");
      continue;
    }
    ret[1] = '\0';
    fnno = atoi(ret);

    if (fnno == 0) break;

    printf("The area is %f\n", (*fn[fnno - 1])());
  }

  return 0;
}