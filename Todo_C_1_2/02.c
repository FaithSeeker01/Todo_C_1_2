#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	double left = 0.0;
	double right = 0.0;
	printf("��������ƽ���������������\n");
	printf("��ߵ�����Ϊ��");		scanf("%lf", &left);
	printf("�ұߵ�����Ϊ��");		scanf("%lf", &right);

	if (left > right)
	{
		printf("��ߵ����������ұߵ�����\n");
	}
	else
	{
		printf("�ұߵ�����������ߵ�����\n");
	}
	return 0;
}