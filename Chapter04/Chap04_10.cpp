#include <stdio.h>
#pragma wargning(disable:4996)

// ǥ�� �̿��Ͽ� �ﰢ�� ����� ����ϴ� ���α׷�
void main()
{
	// int i, j;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) { 
			printf("*");
		}
		printf("\n");
	}
}