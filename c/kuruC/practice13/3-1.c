#include <stdio.h>
#include <string.h>

int main(void) {
  /*変数宣言*/
  int array[10];
  size_t i;

  /*数値の入力*/
  for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
    printf("%zu 個目の数値を入力してください：", i + 1);
    scanf("%d", &array[i]);
  }

  /*数値の出力*/
  for (i = sizeof(array) / sizeof(array[0]); i > 0; i--) {
    printf("%d\n", array[i - 1]);
  }

  return 0;
}