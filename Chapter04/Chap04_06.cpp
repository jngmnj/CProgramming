#include <stdio.h>
#pragma warning(disable:4996)

// ���� 4-6~7
void main()
{
	int i;
	int sum = 0;

	// 1���� 100���� Ȧ���� ���� ���ϴ� ���α׷�1
	for (i = 1; i <= 100; i++)
		if(i % 2)
			sum = sum + i;

	// 1���� 100���� Ȧ���� ���� ���ϴ� ���α׷�2
	for (i = 1; i <= 100; i=i+2)
		sum = sum + i;
	printf("1���� 100������ ��: %d", sum);
}