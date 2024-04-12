#include <stdio.h>
#pragma wargning(disable:4996)

// 주어진 문자열에서 특정문자의 개수를 구하는 프로그램
void main()
{
	static char a[31] = "KOREA NATIONAL OPEN UNIVERSITY";
	int i, c;
	c = 0;
	for (i = 0; i <= 29; i++)
		if (a[i] == 'O')
			c++;

	printf("O의 개수 = %d", c);
}