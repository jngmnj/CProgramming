#include <stdio.h>
#include <conio.h>
#pragma warning(disable:4996)

// �������� 7�ܺ��� 9�ܱ��� �� �ٷ� ����ϴ� ���α׷�
void main()
{
	int i, j;

	for(i=7; i<10; i=i+3) // 7�� ���
		for (j = 1; j < 10; j++) {
			printf("\t %2d * %2d = %2d \t", i, j, i * j); // �ּ� 2�ڸ� ���� ��������. ����������.
			printf("\t %2d * %2d = %2d \t", i+1, j, (i+1) * j);
			printf("\t %2d * %2d = %2d \n", i+2, j, (i+2) * j);
		}
		getch(); // ���α׷� �ٷ� �������� �ʰ� ������� Ű�Է��� ��ٸ�
		printf("\n");
}