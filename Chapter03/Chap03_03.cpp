#include <stdio.h>

void main()
{
	char c;
	printf("�ҹ��� �Ѱ��� �Է��Ͻÿ�. \n");
	c = getchar();	// getchar(): ������ �ڷ� �Է��Լ�
	c = c - 32;		// �ҹ��ڸ� �빮�ڷ� ��ȯ(ASCII)
	putchar(c);		// ������ �ڷ� ����Լ�
}