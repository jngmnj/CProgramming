#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	int a;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("%d�� ¦�� \n", a);
	if (a % 2 == 1)
		printf("%d�� Ȧ�� \n", a);
}