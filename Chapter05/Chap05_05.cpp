#include <stdio.h>	
#include <ctype.h>	// ������ ���¸� �Ǻ��ϴ� �Լ��� ������ ���� �ִ� ��� ����
#pragma warning(disable:4996)

// 5-5. �ԷµǴ� ���ڰ� ���������� �Ǻ��ϴ� ���α׷�
void main()
{
	char ch;
	printf("���ڳ� ���ڸ� �Է��Ͻÿ�. \n");
	ch = getchar();
	if (isalpha(ch))
		printf("%c is alpha character \n", ch);
	else
		printf("%c is not alpha character \n", ch);
}