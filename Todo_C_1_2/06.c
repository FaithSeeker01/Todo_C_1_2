#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int sum = 0;
	int count = 1;
	while (count <= 100)
	{
		sum = sum + count;
		count++;
	}
	printf("1~100���ۼӺ��ǣ�%d\n", sum);
	return 0;
}