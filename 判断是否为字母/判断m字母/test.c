#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        getchar();
        printf("\n");

    }
    return 0;
}