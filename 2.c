#include <stdio.h>
int main()
{
    int sale = 120; //销售业绩为120万
    int year = 1;   //刚刚进入公司1年
    //完善代码
    if (sale > 100)
    {
        if (year >= 2)
        {
            printf("%s\n", "获得优秀员工");
        }
        else
        {
            printf("%s\n", "很遗憾，期望你再接再厉");
        }
    }
    else
    {
        printf("%s\n", "很遗憾，期望你再接再厉");
    }
    return 0;
}