#include <stdio.h>
// #pragma warning(disable : 4996)

#define UNIV "�ѱ������Ŵ��б�"
#define DEP "��ǻ�Ͱ��а�"

void main()
{
	char ch;
	char name[20];

	printf("�̸��� �Է��Ͻÿ�. ");
	gets_s(name);
	printf("������ �Է��Ͻÿ�. ");
	ch = getchar();
	printf("\n\n");

	puts(UNIV);
	puts(DEP);
	puts(name);
	printf("������ ");
	putchar(ch);
}