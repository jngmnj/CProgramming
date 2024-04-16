#include <stdio.h>
#pragma warning(disable:4996)

// 6-2. 3x3 행렬 2개를 읽어들여 합을 출력하는 프로그램
void main()
{
	int A[3][3], B[3][3], C[3][3]; // 2차원 배열 선언
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


	// 두 행렬의 합 계산
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			C[i][j] = A[i][j] + B[i][j];

	// 출력
	printf("\n *** C = A + B *** \n");
	printf("\t## C ## \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d", C[i][j]);
		printf("\n");
	}

}