#include <stdio.h>
#pragma warning(disable:4996)

// �ټ����� �������� �Է¹޾� ������ ���ϴ� ���α׷�
void main()
{
	int sum = 0; // �ʱ�ȭ �ʿ�
	int number;

	for (int i = 0; i < 5; i++) {
		printf("%d��° �������� �Է��� �� EnterŰ�� ��������. ", i + 1);
		scanf("%d", &number);
		sum += number;
	}

	printf("���� ������ ������ %d�Դϴ�.", sum);
}