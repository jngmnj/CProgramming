#include <stdio.h>

// 1부터 100까지 2와 3의 공배수 출력
void main()
{
	int i;
	for (i = 1; i <= 100; i++)
		if (i % 2 == 0 && i % 3 == 0)
			printf("%d ", i);
}