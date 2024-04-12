#include <stdio.h>
#pragma warning(disable:4996)

// 다섯개의 정숫값을 입력받아 총합을 구하는 프로그램
void main()
{
	int sum = 0; // 초기화 필요
	int number;

	for (int i = 0; i < 5; i++) {
		printf("%d번째 정숫값을 입력한 후 Enter키를 누르세요. ", i + 1);
		scanf("%d", &number);
		sum += number;
	}

	printf("읽은 정수의 총합은 %d입니다.", sum);
}