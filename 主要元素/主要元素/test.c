#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//时间复杂度不超过o(n),空间复杂度不超过o(1)
int majorityElement(int* nums, int numsSize)
{
	int flag = 0;//设置一个变量flag判断数组的的某个元素是否为可疑元素
	//若出现重复则flag++，反之flag--，当flag==0时则跳至下一元素
	int tmp = nums[0];
	for (int i = 0; i < numsSize; i++)
	{
		if (tmp == nums[i])
			flag++;
		else
			flag--;
		if (flag == 0)
			tmp = nums[i + 1];
	}
	//flag置零以验证所确定的可疑元素是否为主要元素
	flag = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (tmp == nums[i])
			flag++;
	}
	return flag > numsSize / 2 ? tmp : -1;//判断依据：重复的次数是否超过原数组的个数的一半
}

int main()
{
	int a[] = { 1,2,1,5,5,5,5,5,5,5,6 };
	int sz = sizeof(a) / sizeof(a[0]); 
	int ret = majorityElement(a,sz);
	printf("%d\n", ret);
	return 0;
}