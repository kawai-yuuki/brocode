#include <stdio.h>

int main(void)
{
    /*変数定義*/
    int calender;
    /*入力*/
    printf("西暦を入力してください：");
    scanf("%d", &calender);
    if (calender % 4 == 0)
    {
        printf("夏季オリンピックイヤーです．\n");
    }
    if (calender % 4 != 0)
    {
        printf("夏季オリンピックイヤーではありません．\n");
    }
    if (calender % 4 == 2)
    {
        printf("冬季オリンピックイヤーです．\n");
    }
    if (calender % 4 != 2)
    {
        printf("冬季オリンピックイヤーではありません．\n");
    }
}