#include <stdio.h>
#pragma warning(disable:4996)

// 6-4. N���� ������ �о� �鿩 ������������ �����ϴ� ���α׷�
void main()
{
	static int data[100];
	int i, j, N;
	printf("�Է��� �������� ������ �Է��ϼ���. \n");
	scanf("%d", &N);

	// ������ �Է¹ޱ�
	for (i = 0; i < N; i++) {
		scanf("%d", &data[i]);
	}
	
	// ����
	for (i = 0; i < N; i++) {
		for (j = i+1; j < N; j++) {
			if (data[i] > data[j]) {
				data[i] ^= data[j];
				data[j] ^= data[i];
				data[i] ^= data[j];
			}
		}
	}

	// ���
	printf("�������� ���� �迭 ��� \n");
	for (i = 0; i < N; i++) {
		printf("%d ", data[i]);
		if ((i + 1) % 7 == 0)
			printf("\n");
	}
}
