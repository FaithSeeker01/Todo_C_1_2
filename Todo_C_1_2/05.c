#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int integer = 15631;
	int digit = 0;
	printf("%d\n", integer);
	do
	{
		integer = integer / 10;
		digit++;
		
	} while (integer > 0);
	
	printf("�����ֵ���λ��%dλ", digit);
	return 0;
}