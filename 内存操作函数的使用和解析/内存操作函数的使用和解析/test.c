#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <memory.h>
#include <assert.h>
void* my_memcpy(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return ret;
}
typedef struct Wife 
{
	char name[20];
	char color[10];
	int weight;
}W;
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	my_memcpy(arr2, arr, sizeof(arr));

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	W w1 = { "nengdai","black",40 };
	W* pw1 = &w1;
	W w2 = {0};
	W* pw2 = &w2;
	my_memcpy(pw2, pw1, sizeof(W));
	
	return 0;
}