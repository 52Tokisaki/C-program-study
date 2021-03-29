#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


typedef unsigned int uint32_t;
uint32_t reverseBits(uint32_t n)
{
	int ret = 0;
	for (int i = 0; i < 32 && n != 0; i++)
	{
		ret |= (n & 1) << (31 - i);//nͨ����1��λ��ȡ���һλ���ƺ��ٺ�ret��λ��
		n >>= 1;//n����ȡ��ǰһλ
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