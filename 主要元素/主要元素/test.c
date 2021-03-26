#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ʱ�临�ӶȲ�����o(n),�ռ临�ӶȲ�����o(1)
int majorityElement(int* nums, int numsSize)
{
	int flag = 0;//����һ������flag�ж�����ĵ�ĳ��Ԫ���Ƿ�Ϊ����Ԫ��
	//�������ظ���flag++����֮flag--����flag==0ʱ��������һԪ��
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
	//flag��������֤��ȷ���Ŀ���Ԫ���Ƿ�Ϊ��ҪԪ��
	flag = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (tmp == nums[i])
			flag++;
	}
	return flag > numsSize / 2 ? tmp : -1;//�ж����ݣ��ظ��Ĵ����Ƿ񳬹�ԭ����ĸ�����һ��
}

int main()
{
	int a[] = { 1,2,1,5,5,5,5,5,5,5,6 };
	int sz = sizeof(a) / sizeof(a[0]); 
	int ret = majorityElement(a,sz);
	printf("%d\n", ret);
	return 0;
}