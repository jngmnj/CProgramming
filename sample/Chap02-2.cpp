#include <stdio.h>
#define AGE 28
#define PI 3.141592
#define NAME "ȫ�浿"

const int a = 10;
// �Ҽ��� 6�ڸ����� float�Ǵµ��� double��???
const float b = 10.56789;// 'double'���� 'float'(��)�� �߸��ϴ�.

const char c = 'K';
const char* KNOU = "�ѱ������Ŵ��б�";

int main()
{
	int i = 28;
	float j = 4.0;
	char k = 'A';
	char ch[10] = "ȫ�浿";
	// �����ͺ���???
	char *p = "��ǻ�Ͱ��а�"; // const char [13]'���� 'char *'(��)�� ��ȯ�� �� �����ϴ�.

	printf("�б���: %s �̸���: %s ���̴�: %d\n\n", KNOU, NAME, AGE);
	printf("%s %s ����:%d ����: %c ����:%f \n", p, ch, i, k, j);

	return 0;
}
