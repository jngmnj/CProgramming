#include <stdio.h>
#pragma warning(disable:4996)

// 6-5. ������ ������ ����ϴ� ���α׷�
void main()
{
	int i = 127;
	int j;

	printf("i�� �� 10����, 16���� ���: %d, %x \n", i, i); // ���� i�� ���� 10������ 16������ ���
	printf("i�� �ּ�: %x \n", &i); // &������: �ּҿ�����
	printf("i�� 16���� �ּ�: %#x \n", &i);
	printf("j�� �ּ�: %x \n", &j);
	printf("j�� 16���� �ּ�: %#x \n", &j); // 16���� ����� ���λ� 0x�� ���̴� �ɼ� 
}