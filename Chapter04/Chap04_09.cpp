#include <stdio.h>
#pragma wargning(disable:4996)

// �־��� ���ڿ����� Ư�������� ������ ���ϴ� ���α׷�
void main()
{
	static char a[31] = "KOREA NATIONAL OPEN UNIVERSITY";
	int i, c;
	c = 0;
	for (i = 0; i <= 29; i++)
		if (a[i] == 'O')
			c++;

	printf("O�� ���� = %d", c);
}