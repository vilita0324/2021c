#include <stdio.h>
int main()
{
    printf("請輸入座號1~10=>");
    int id;
    scanf("%d",&id);

    printf(" %5s %5s %5s %5s %5s %5s %5s %5s %5s\n",
           "姓名 ","座號","國語","數學","英文","基電","電子",
           "總分","平均成績");
    printf(" %5s %5d %5d %5d %5d %5d %5d %5d %6.2f\n",
           "名子1",1, 1,  1,  1,  1,  1,  5,  1.0f);
    printf(" %5s %5d %5d %5d %5d %5d %5d %5d %6.2f\n",
           "名子5",5, 100,  100,  100,  100,  100,  500,  100.0f);
}
