#include <stdio.h>	
#include <string.h>	
#pragma warning(disable:4996)

// 5-4. ���ڿ��� ���̸� ���ϴ� ���α׷�
void main()
{
	char string[200];
	printf("������ �Է��� ��, EnterŰ�� ġ����! \n");
	printf("�ƹ��͵� �Է����� ������ ���α׷��� ����˴ϴ�! \n");

	do {
		gets_s(string, sizeof(string)); // ���ڿ� �Է�
		if (strlen(string) == 0) break;
		printf("���ڿ��� ���̴� %d�Դϴ�.\n", int(strlen(string))); 
	} while (1);
}