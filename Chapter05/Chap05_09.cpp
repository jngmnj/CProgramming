#include <stdio.h>	
#include <string.h>	// ������ ���¸� �Ǻ��ϴ� �Լ��� ������ ���� �ִ� ��� ����
#pragma warning(disable:4996)

// 5-9. �ԷµǴ� �� ���ڿ��� �����ϴ� ���α׷�
void main()
{
	char str1[20], str2[20];
	printf("���ڿ� �ΰ��� �Է��Ͻÿ�. \n");
	scanf("%s", str1);
	scanf("%s", str2);
	strcat(str1, str2); // strcat(): ���ڿ� �����Լ�. ù��°���ڿ��� ������ \0�� ���ְ� �ι�°���ڿ��� �̾����
	printf("%s \n", str1);
}