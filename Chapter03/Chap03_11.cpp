#include <stdio.h>

// 1���� 100���� 2�� 3�� ����� ���
void main()
{
	int i;
	for (i = 1; i <= 100; i++)
		if (i % 2 == 0 && i % 3 == 0)
			printf("%d ", i);
}