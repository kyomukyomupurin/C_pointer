#include <stdio.h>

char* get_date(int day) {
  char* date[] = {
    "Saturday",
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
  };

  return date[day % 7];
}

int main() {
  int day;
  printf("Input a day---");
  scanf("%d", &day);

  printf("Day %d is %s\n", day, get_date(day));
}