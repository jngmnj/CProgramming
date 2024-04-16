#include <stdio.h>
#pragma warning(disable:4996)

// 6-3. 5x5 정방행렬의 전치행렬을 구하는 프로그램
// 전치행렬: 행과 열 교환
void main()
{
	int i, j, dim[5][5] = { {4,5,7,8,9}, {5,2,4,6,2}, {4,7,8,5,2}, {3,5,8,9,6}, {7,5,6,9,8} };
	const int max_count = sizeof(dim) / sizeof(dim[0]);

	printf("원래의 행렬 \n");
	for (i = 0; i < max_count; i++) {
		for (j = 0; j < max_count; j++)
			printf("%d ", dim[i][j]);
		printf("\n");
	}
	printf("\n");

	// 전치행렬 바꾸기 
	// ^= 비트단위 XOR 복합대입연산
	// temp가은 임시변수를 사용하지 않고 더 간결하게 교환(전치)을 수행할 수 있다
	for (i = 0; i < max_count; i++) {
		for (j = 0; j < i; j++) {
			dim[i][j] ^= dim[j][i];
			dim[j][i] ^= dim[i][j];
			dim[i][j] ^= dim[j][i]; 
		}
	}

	// 출력
	printf("전치행렬 \n");
	for (i = 0; i < max_count; i++) {
		for (j = 0; j < max_count; j++)
			printf("%d ", dim[i][j]);
		printf("\n");
	}
}
