#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

int main() {
  double* pd;
  double* pd2;
  double sum = 0;
  int no = 0, i;
  char szData[32];

  pd = (double*)malloc(0);

  if (!pd) {
    perror("Memory allocation failed\n");
    exit(-1);
  }

  while (1) {
    printf("Input an integer(Press 'E' to finish):");
    fgets(szData, sizeof(szData), stdin);

    if (szData[0] == 'e' || szData[0] == 'E') {
      printf("Quit input\n");
      break;
    }

    pd2 = (double*)realloc(pd, sizeof(double) * (no + 1));

    if (!pd2) {
      perror("Memory allocation failed\n");
      free(pd);
      exit(-2);
    }

    pd = pd2;
    pd[no] = atof(szData);
    sum += pd[no];
    ++no;
  }

  if (no) {
    for (i = 0; i < no; ++i) {
      printf("[NO.%d] %f\n", i + 1, pd[i]);
    }
    printf("Sum\t%f\n", sum);
    printf("Average\t%f\n", sum / no);
  }

  free(pd);

  return 0;
}