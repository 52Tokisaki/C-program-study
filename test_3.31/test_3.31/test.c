#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������λ1�ĸ���
typedef unsigned int uint32_t;
int hammingWeight(uint32_t n)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((n & (1 << i)) != 0)
			count++;
	}
	return count;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", hammingWeight(n));
	return 0;
}

//ʵ��pow����
//double myPow(double x, int n)//�ݹ飬���ݣ�����
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n < 0)
//	{
//		return 1 / (x * myPow(x, -(n + 1)));
//	}
//	else
//	{
//		if (n % 2 == 1)
//		{
//			return x * myPow(x * x, n / 2);
//		}
//		else
//		{
//			return myPow(x * x, n / 2);
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	double x = 0;
//	scanf("%lf %d", &x, &n);
//	double ret = myPow(x, n);
//	printf("%lf\n", ret);
//	return 0;
//}

//ʧ�ܷ�����ʱ�临�Ӷ�̫��
//double myPow(double x, int n) {
//    double ret = x;
//    if (n == 0)
//    {
//        return (double)1;
//    }
//    else if (n > 0)
//    {
//        for (int i = 0; i < n - 1; i++)
//        {
//            x *= ret;
//        }
//    }
//    else
//    {
//        for (int i = 0; i >= n; i--)
//        {
//            x /= ret;
//        }
//    }
//    return x;
//}
//int main()
//{
//    double x = 0;
//    int n = 0;
//    scanf("%lf %d", &x, &n); 
//    double ret = myPow(x, n);
//    printf("%lf\n", ret);
//    return 0;
//}