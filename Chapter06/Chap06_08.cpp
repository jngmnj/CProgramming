#include <stdio.h>
#pragma warning(disable:4996)

// 6-8. 2���� �迭 a, b�� ������ ���� ��ȯ�ϴ� ���α׷�
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
	printf("<��ȯ ��>\n");
	printf("a[] = %s \n", a);
	printf("b[] = %s \n", b);
	swap(a, b);
	printf("<��ȯ ��>\n");
	printf("a[] = %s \n", a);
	printf("b[] = %s \n", b);
}