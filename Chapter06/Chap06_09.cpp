#include <stdio.h>
#pragma warning(disable:4996)

// 6-9. ���ڿ����� �ѱ۸� �����ϴ� ���α׷�
void main()
{
	//unsigned char *p = "Computer science ��ǻ���а�"; // ������ ����� �ʱ�ȭ
	const char* p = "Computer science ��ǻ���а�"; // ������ ����� �ʱ�ȭ
	unsigned char buff[20] = { 0, };
	int i = 0;

	while (*p) {
		if (*p > 127) { // �ѱ� �˻�����(�ѱ��� 2byte�� �����Ǳ� ������ ASCII �ڵ尪�� 127�̻���)
			buff[i++] = *p;
		}
		p++;
	}
	puts(buff);
	//printf("%s", buff);
}