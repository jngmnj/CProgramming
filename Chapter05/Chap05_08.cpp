#include <stdio.h>	
#include <string.h>	// ������ ���¸� �Ǻ��ϴ� �Լ��� ������ ���� �ִ� ��� ����
#pragma warning(disable:4996)

// 5-8. ���ڿ��� �����ϰ�, ���̸� ���ϴ� ���α׷�
void main()
{
	int len;
	char s[50];
	strcpy(s, "COMPUTER SCIENCE"); // ���ڿ��� ����
	printf("%s \n\n", s);
	len = strlen(s);
	printf("%d \n\n", len);
}