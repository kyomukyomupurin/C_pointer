#include <stdio.h>

const int num = 40;

int main() {
  double time[45];
  double sum = 0;

  int i;
  for (i = 0; i < num; ++i) {
    scanf("%lf", &time[i]);
    sum += time[i];
  }

  double ave = sum / num;

  printf("The average time is %3.1f\n", ave);

  return 0;
}