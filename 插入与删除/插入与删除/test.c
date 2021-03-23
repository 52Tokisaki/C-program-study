#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//’ª“Á≥ˆ
//void Insert_Elm(int arr[], int i, int k, int n)
//{
//	for (int j = n; j > i; j--)
//	{
//		arr[j] = arr[j - 1];
//	}
//	arr[i] = k;
//}
//int main()
//{
//	//≤Â»Î
//	int arr[11] = { 1,2,3,4,5,6,7,8,9 };
//	int i, k;
//	printf("input i and k:\n");
//	scanf("%d %d", &i, &k);
//	Insert_Elm(arr, i, k, 11);
//	for (int j = 0; j < 11; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

void Delete_Elm(int arr[], int i, int k, int sz)
{
	for (int j = i; j < sz - 1; j++)
	{
		arr[j] = arr[j + 1];
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int i, k;
	printf("please input i and k:\n");
	scanf("%d %d", &i, &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	Delete_Elm(arr, i, k, sz);
	for (int j = 0; j < sz - 1; j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
}