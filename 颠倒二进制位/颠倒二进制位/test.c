#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


typedef unsigned int uint32_t;
uint32_t reverseBits(uint32_t n)
{
	int ret = 0;
	for (int i = 0; i < 32 && n != 0; i++)
	{
		ret |= (n & 1) << (31 - i);//n通过和1按位与取最后一位右移后，再和ret按位或
		n >>= 1;//n依次取其前一位
	}
	return ret;
}


int main()
{

	int n = 0;
	scanf("%d", &n);
	printf("%u\n", reverseBits(n));
	return 0;
}