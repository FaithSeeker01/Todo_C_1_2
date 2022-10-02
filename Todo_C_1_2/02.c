#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	double left = 0.0;
	double right = 0.0;
	printf("请输入天平两边物体的重量：\n");
	printf("左边的重量为：");		scanf("%lf", &left);
	printf("右边的重量为：");		scanf("%lf", &right);

	if (left > right)
	{
		printf("左边的重量大于右边的重量\n");
	}
	else
	{
		printf("右边的重量大于左边的重量\n");
	}
	return 0;
}