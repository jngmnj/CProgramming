#include <stdio.h>	
#include <string.h>		// ���ڿ� ó�� �Լ��� ������ ���� �ִ� �������
#pragma warning(disable:4996)

// 5-2. �ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� ���α׷�
void main()
{
	char string[] = "abcdefghijklmnopqrstuvwxyz";
	unsigned i, len;
	puts(string);			// puts() �Լ��� ���ڿ��� ȭ�鿡 ����ϴ� �Լ�
	len = strlen(string);	// strlen() �Լ��� ���ڿ��� ����(���� ��)�� ��ȯ�ϴ� �Լ�
	for (i = 0; i < len; i++) {
		// ��� 1: ��Ʈ ���� AND ������ ����Ͽ� �ҹ��ڸ� �빮�ڷ� ��ȯ
		string[i] = string[i] & 0xDF; // 2������ 11011111
		
		// ��� 2: ASCII �ڵ尪���� 32�� ���� �빮�ڷ� ��ȯ
		// string[i] -= 32;
	}
	puts(string);
}