#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Data {
  char name[32];
  char tel[32];
} MydataType, *lpMydataType;

int menu() {
  char ret[8];

  printf("****** MENU *****\n");
  printf("1: Input data\n");
  printf("2: Show data\n");
  printf("0: Finish\n");
  printf("************\n");
  printf("----->");
  fgets(ret, sizeof(ret), stdin);
  return atoi(ret);
}

int main() {
  /* 以下略 */
}
