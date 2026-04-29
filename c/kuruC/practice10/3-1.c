#include <stdio.h>

int main(void) {
  /*変数定義*/
  int score;

  /*テストの点数の入力*/
  do {
    printf("点数を入力してください：");
    scanf("%d", &score);
  } while (score < 0 || 100 < score);

  /*テストの点数表示*/
  printf("テストの点数は%3d点です\n", score);
  return 0;
}