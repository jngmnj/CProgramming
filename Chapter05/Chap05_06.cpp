#include <stdio.h>	
#include <ctype.h>	// ������ ���¸� �Ǻ��ϴ� �Լ��� ������ ���� �ִ� ��� ����
#pragma warning(disable:4996)

// 5-6. �ԷµǴ� ���ڰ� �������� �Ǻ��ϴ� ���α׷�
void main()
{
	char ch;
	printf("���ڳ� ���ڸ� �Է��Ͻÿ�. \n");
	ch = getchar();
	if (isdigit(ch))
		printf("%c is a number \n", ch);
	else
		printf("%c is not a number \n", ch);
}