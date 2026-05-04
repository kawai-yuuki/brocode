#include <stdio.h>

typedef struct {
  int id;
  char name[64];
  int average_score;
} ScoreData;

int main(void) {
  FILE* fp;

  fp = fopen("exam_result.csv", "w");

  if (fp == NULL) {
    printf("ファイルを開けませんでした。\n");
  }

  ScoreData students[4] = {{1, "野比のび太", 0},
                           {2, "源静香", 90},
                           {3, "剛田武", 40},
                           {4, "骨川スネ夫", 7}};
  int i;
  for (i = 0; i < 4; i++) {
    fprintf(fp, "%d,%s,%d\n", students[i].id, students[i].name,
            students[i].average_score);
  }

  fclose(fp);
  printf("CSVファイルを作成しました。\n");
  return 0;
}