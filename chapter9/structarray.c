#include <stdio.h>

const int STUDENTNO = 5;
const int SUBJECTNO = 3;

int drawline() {
  int i;
  for (i = 0; i < 35; ++i) putchar('-');
  putchar('\n');

  return 0;
}

struct Seiseki {
  char name[32];
  int kokugo;
  int sugaku;
  int eigo;
};

int main() {
  struct Seiseki myclass[5] = {
    {"Tanaka", 80, 80, 55},
    {"Sato", 75, 90, 70},
    {"Ota", 50, 45, 30},
    {"Suzuki", 100, 55, 90},
    {"Kato", 60, 85, 35}
  };

  int i, sum0 = 0, sum1[SUBJECTNO], sum2[STUDENTNO];

  for (i = 0; i < SUBJECTNO; ++i) sum1[i] = 0;
  for (i = 0; i < STUDENTNO; ++i) sum2[i] = 0;

  for (i = 0; i < STUDENTNO; ++i) {
    sum1[0] += myclass[i].kokugo;
    sum1[1] += myclass[i].sugaku;
    sum1[2] += myclass[i].eigo;
  }

  for (i = 0; i < STUDENTNO; ++i) {
    sum2[i] = myclass[i].kokugo + myclass[i].sugaku + myclass[i].eigo;
  }

  for (i = 0; i < STUDENTNO; ++i) sum0 += sum2[i];

  printf("**** Grade ****\n\n");

  /* 以下略 */
}