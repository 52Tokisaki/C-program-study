#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)//EOF:�ļ�������־
    {
        putchar(ch + 32);
        printf("\n");
        getchar();//�����ַ�'\n'
    }
    return 0;
}
