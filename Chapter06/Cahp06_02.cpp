#include <stdio.h>
#pragma warning(disable:4996)

// 6-2. 3x3 ��� 2���� �о�鿩 ���� ����ϴ� ���α׷�
void main()
{
	int A[3][3], B[3][3], C[3][3]; // 2���� �迭 ����
	int i, j;

	printf("*** Input the first matrix (3*3) *** \n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &A[i][j]);

	printf("\t## A ## \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d", A[i][j]);
		printf("\n");
	}


	printf("*** Input the seconed matrix (3*3) *** \n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &B[i][j]);

	printf("\t## B ## \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%2d", B[i][j]);
		printf("\n");
	}


	// �� ����� �� ���
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			C[i][j] = A[i][j] + B[i][j];

	// ���
	printf("\n *** C = A + B *** \n");
	printf("\t## C ## \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d", C[i][j]);
		printf("\n");
	}

}