#include <stdio.h>
#include <conio.h>
#include <string.h>
#pragma warning(disable:4996)

// 6-6. 입력된 문자열을 역방향으로 출력하는 프로그램
void main()
{
	char buffer[80], * p;
	p = &buffer;
	int len, i = 0;

	printf("Input String: ");
	scanf("%s", p);

	len = strlen(p);
	while (*p)
		p++;
	
	printf("Inverse String: ");
	while (i < len) {
		p--;
		putchar(*p);
		i++;
	}

	putchar('\n');
	getch(); //
}