#include <stdio.h>

struct Data {
  int data1;
  char data2;
  char data3[32];
};

int main() {
  struct Data mydata = {10, 'A', "cat"};

  printf("%d, %c, %s\n", mydata.data1, mydata.data2, mydata.data3);

  return 0;
}