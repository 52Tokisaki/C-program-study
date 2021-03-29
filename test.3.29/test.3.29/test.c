#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)//EOF:文件结束标志
    {
        putchar(ch + 32);
        printf("\n");
        getchar();//吸收字符'\n'
    }
    return 0;
}
