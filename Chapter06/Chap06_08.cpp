#include <stdio.h>
#pragma warning(disable:4996)

// 6-8. 2개의 배열 a, b의 내용을 서로 교환하는 프로그램
char swap(char* x, char* y)
{
	char temp;
	while (*x) {
		temp = *x;
		*x = *y;
		*y = temp;
		x++;
		y++;
	}
	
	return temp;
}

void main()
{
	static char a[] = "SEOUL";
	static char b[] = "KOREA";
	printf("<교환 전>\n");
	printf("a[] = %s \n", a);
	printf("b[] = %s \n", b);
	swap(a, b);
	printf("<교환 후>\n");
	printf("a[] = %s \n", a);
	printf("b[] = %s \n", b);
}