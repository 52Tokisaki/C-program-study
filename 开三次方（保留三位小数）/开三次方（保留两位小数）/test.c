#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

double Cubic_Root(double n)
{
	double x = 0.001;
	while (x * x * x < n)
	{
		x += 0.001;
	}
	return x;
}
int main()
{
	double n = 0;
	printf("input n:\n");
	scanf("%lf", &n);
	assert(n <= 100 && n >= 0);
	double ret = Cubic_Root(n);
	printf("%lf\n", ret);
	return 0;
}
