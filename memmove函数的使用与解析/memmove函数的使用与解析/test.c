#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t size)
{
	assert(dest && src);
	
	void* ret = dest;
	if (dest > src)
	{

		while (size--)
		{
			*((char*)dest + size) = *((char*)src + size);//需画出内存图加以理解
		}
	}
	else
	{
		while (size--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}

	return ret;
}

int main()
{
	int a1[] = { 1,2,3,4,5,6,7,8,9 };
	my_memmove(a1 + 2, a1, 3*sizeof(a1[0]));
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", a1[i]);
	}
	return 0;
}