#include <stdio.h>

typedef struct Data {
  char name[32];
  int age;
  struct Data* nextdata;
} MyDataType ;

int main() {
  MyDataType a = {"Kumei", 28, },
             b = {"Tanaka", 35, },
             c = {"Suzuki", 18, };
  
  MyDataType *lpdata;

  a.nextdata = &b;
  b.nextdata = &c;
  c.nextdata = NULL;

  for (lpdata = &a; lpdata; lpdata = lpdata->nextdata) {
    printf("%s (%d years old)\n", lpdata->name, lpdata->age);
  }

  return 0;
}