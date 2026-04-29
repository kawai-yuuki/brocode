#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  /*変数の宣言*/
  char first_name[256];
  char last_name[256];

  /*名前の入力*/
  printf("Enter your first name:");
  scanf("%s", first_name);

  printf("Enter your last name:");
  scanf("%s", last_name);

  /*結果を出力*/
  printf(first_name);
  printf(last_name);

  printf("\n");

  return 0;
}
