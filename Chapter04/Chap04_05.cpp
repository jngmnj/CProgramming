#include <stdio.h>
#pragma warning(disable:4996)

// 1���� 100������ ���� ���ϴ� ���α׷�
void main()
{
	int i;
	int sum = 0;
	for (i = 1; i <= 100; i++)
		sum = sum + i;
	printf("1���� 100������ ��: %d", sum);
}