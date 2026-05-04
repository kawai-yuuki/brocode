#include <stdio.h>

typedef enum {
  NOT_HELD,
  SUMMER,
  WINTER,
} HoldType;

HoldType olympic(int year);

int main(void) {
  /*変数の定義*/
  int year;
  HoldType hold;

  printf("西暦を入力してください：");
  scanf("%d", &year);

  hold = olympic(year);

  switch (hold) {
    case NOT_HELD:
      printf("開かれない\n");
      break;
    case SUMMER:
      printf("夏季五輪\n");
      break;
    case WINTER:
      printf("冬季五輪\n");
      break;
  }

  return 0;
}

HoldType olympic(int year) {
  if (year % 2 == 0) {
    if (year % 4 == 0) {
      return SUMMER;
    } else {
      return WINTER;
    }
  } else {
    return NOT_HELD;
  }
}