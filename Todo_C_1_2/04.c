#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int floor;
	for (floor = 25; floor >= 1; floor--)
	{
		printf("����¥��Ϊ��%d\n", floor);
	}
	for (floor = -1; floor >= -3; floor--)
	{
		printf("����¥��Ϊ��%d\n", floor);
	}
	return 0;
}