#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Wife
{
	char name[20];
	int weight;
};
int cmp_int(const void*e1,const void *e2)
{
	return *((int*)e1) - *((int*)e2);
}
int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else
	{
		return -1;
	}
	//return (int)(*((float*)e1) - *((float*)e2));
}
int cmp_by_name(const void* e1, const void* e2)//strcmp(e1,e2)>0,"e1>e2"
{
	return strcmp(((struct Wife*)e1)->name, ((struct Wife*)e2)->name);
}

//由冒泡排序法构造效果类似qsort函数的函数
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubblesort(void* base,int sz,int width,int (*cmp)(const void* e1,const void* e2))
{
	int i = 0;//确定冒泡排序的趟数
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;//确定需要比较的对数
		for (j = 0; j < sz - 1 - i; j++)
		{
			//将待比较的数组指针传给使用这所写的函数
			//由于该指针是void*型，需先强制类型转换为char*型
			//再根据width得到要比较的数组元素的字节数
			//从而利用cmp函数比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//当比较出大小后，将需要交换的元素传给Swap函数
				//+j*width是跳过这么多的字节数，任然指向数组的某个元素
				Swap((char*)base + j * width,(char*)base + (j+1) * width, width);
			}
		}
	}
}
void test4()
{
	int arr[5] = { 11,25,57,35,64, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test5()
{
	struct Wife w[3] = { {"guanghui",40},{"qiye",45},{"wuqi",44} };
	int sz = sizeof(w) / sizeof(w[0]);
	bubblesort(w, sz, sizeof(w[0]), cmp_by_name);
	for (int i = 0; i < sz; i++)
	{
		printf("%s %d\n", w[i].name, w[i].weight);
	}
	printf("\n");
}
int main()
{
	//test4();
	test5();
	return 0;
}
//void test1()qsort函数使用举例
//{
//	int arr[10] = { 1,2,3,46,4,25,34,9,5,57 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%2d ", arr[i]);
//	}
//	printf("\n");
//}
//void test2()
//{
//	float f[] = { 1.0,5.0,3.1,5.3,8.8 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	printf("\n");
//}
//void test3()
//{
//	struct Wife w1 = { "guanghui",40 };
//	struct Wife w2 = { "wuqi",44 };
//	struct Wife w3 = { "hude",42 };
//	struct Wife W[3] = { w1,w2,w3 };
//	int sz = sizeof(W) / sizeof(W[0]);
//	qsort(W, sz, sizeof(W[0]), cmp_by_name);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", W[i].name,W[i].weight);
//	}
//	printf("\n");
//}
//int main()
//{
//
//	test1();
//	
//	test2();
//
//	test3();
//
//	return 0;
//}

//冒泡排序法
//void Bubble_sort(int arr[], int sz)只能用于排序整形，应用范围极为有限
//{
//	int flag = 0;
//	int i = 0;//确定冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		flag = 1;
//		int j = 0;//确定一趟要比较的对数
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,54,3,68,3,6,49,25,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%2d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}