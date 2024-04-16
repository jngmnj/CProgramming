#include <stdio.h>
#pragma warning(disable:4996)

// 6-4. N개의 정수를 읽어 들여 오름차순으로 정렬하는 프로그램
void main()
{
	static int data[100];
	int i, j, N;
	printf("입력할 데이터의 개수를 입력하세요. \n");
	scanf("%d", &N);

	// 정수값 입력받기
	for (i = 0; i < N; i++) {
		scanf("%d", &data[i]);
	}
	
	// 정렬
	for (i = 0; i < N; i++) {
		for (j = i+1; j < N; j++) {
			if (data[i] > data[j]) {
				data[i] ^= data[j];
				data[j] ^= data[i];
				data[i] ^= data[j];
			}
		}
	}

	// 출력
	printf("오름차순 정수 배열 출력 \n");
	for (i = 0; i < N; i++) {
		printf("%d ", data[i]);
		if ((i + 1) % 7 == 0)
			printf("\n");
	}
}
