#include <stdio.h>

// ��Ʈ �����ڸ� �̿��� ������ ������ ���� ���α׷�
void main()
{
	int result;
	printf("4*8/16=");
	result = 4;
	result = result << 3; // ����: ���� ����Ʈ, 8�� 2�� 3��
	result = result >> 4; // ������: ������ ����Ʈ, 16�� 2�� 4��
	printf("%d\n", result);
}