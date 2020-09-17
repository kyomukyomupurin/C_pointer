#include <stdio.h>

const int NO = 3;

int main() {
  int point[][2] = {
    {80, 80}, // score of English, math
    {100, 98},
    {60, 80},
  };

  int i, j, sum = 0, p_sum[NO];
  double ave;

  for (i = 0; i < NO; ++i) {
    sum += point[i][0];
  }

  ave = (double)sum / NO;

  printf("The average score of English is %5.1f.\n", ave);

  sum = 0;

  for (i = 0; i < NO; ++i) {
    sum += point[i][1];
  }

  ave = (double)sum / NO;

  printf("The average score of math is %5.1f.\n", ave);

  for (int i = 0; i < NO; ++i) p_sum[i] = 0;

  for (i = 0; i < NO; ++i) {
    for (j = 0; j < 2; ++j) {
      p_sum[i] += point[i][j];
    }
    printf("The total score of number %d is %d.\n", i + 1, p_sum[i]);
  }

  return 0;
}