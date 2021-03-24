#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

char* Replace(char* s)
{
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		char ch;
		for (ch = 'a'; ch < 'z'; ch++)
		{
			if (s[i] == '?' && i >= 0)
			{
				if (s[i - 1] == ch || s[i + 1] == ch)
				{
					continue;
				}
				else
				{
					s[i] = ch;
				}
			}
			else if (s[i] == '?' && i == 0)
			{
				if (s[i + 1] == ch)
				{
					continue;
				}
				else
				{
					s[i] = ch;
				}
			}
		}
	}
	return s;
}
int main()
{
	char s[] = "nengd?i";
	Replace(s);
	printf("%s\n", s);
	return 0;
}