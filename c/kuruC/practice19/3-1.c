#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/*3人分の、名前、年齢、性別、を入力して表示するプログラム*/
/*データの入力と表示はそれぞれ専用の関数を作って行う*/

typedef struct {
  char name[64];
  int age;
  int sex; /*male:1, female:0*/
} profile;

void profile_input(profile* data);
void profile_print(profile* data);

int main(void) {
  profile* data = NULL;
  int i, count = 0;
  while (1) {
    data = realloc(data, sizeof(profile) * (count + 1));
    profile_input(&data[count]);
    if (data[count].age == -1) {
      break;
    } else {
      count++;
    }
  }

  for (i = 0; i < count; i++) {
    profile_print(&data[i]);
  }

  free(data);
  return 0;
}

void profile_input(profile* data) {
  printf("名前を入力してください：");
  scanf("%s", data->name);
  printf("年齢を入力してください：");
  scanf("%d", &data->age);
  printf("性別を入力してください：");
  scanf("%d", &data->sex);
}

void profile_print(profile* data) {
  printf("name: %s\n", data->name);
  printf("age: %d\n", data->age);
  if (data->sex == 0) {
    printf("sex: female\n");
  } else if (data->sex == 1) {
    printf("sex: male\n");
  } else {
    printf("sex: ?\n");
  }
}