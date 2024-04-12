#include <stdio.h>
#pragma warning(disable:4996)

// 예제 4-6~7
void main()
{
	int i;
	int sum = 0;

	// 1부터 100까지 홀수의 합을 구하는 프로그램1
	for (i = 1; i <= 100; i++)
		if(i % 2)
			sum = sum + i;

	// 1부터 100까지 홀수의 합을 구하는 프로그램2
	for (i = 1; i <= 100; i=i+2)
		sum = sum + i;
	printf("1부터 100까지의 합: %d", sum);
}