#include <stdio.h>

void min_max(int*, int*, int[]);

int main(void) {
  /*変数定義*/
  int min = 0, max = 0, num[10], i = 0;

  /*変数の入力*/
  do {
    printf("Enter the number: ");
    scanf("%d", &num[i]);
    printf("%d\n", num[i]);
    i++;
  } while (num[i - 1] != -1 && i < 10);

  /*関数呼び出し*/
  min_max(&min, &max, num);
  printf("min = %d\n", min);
  printf("max = %d\n", max);

  return 0;
}

void min_max(int* min, int* max, int num[]) {
  int j = 0;
  *min = num[0];
  *max = num[0];
  while (j < 10) {
    if (num[j] == -1) {
      break;
    } else if (num[j] > *max) {
      *max = num[j];
    } else if (num[j] < *min) {
      *min = num[j];
    }
    j++;
  }
  return;
}