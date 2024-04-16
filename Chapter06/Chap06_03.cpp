#include <stdio.h>
#pragma warning(disable:4996)

// 6-3. 5x5 ��������� ��ġ����� ���ϴ� ���α׷�
// ��ġ���: ��� �� ��ȯ
void main()
{
	int i, j, dim[5][5] = { {4,5,7,8,9}, {5,2,4,6,2}, {4,7,8,5,2}, {3,5,8,9,6}, {7,5,6,9,8} };
	const int max_count = sizeof(dim) / sizeof(dim[0]);

	printf("������ ��� \n");
	for (i = 0; i < max_count; i++) {
		for (j = 0; j < max_count; j++)
			printf("%d ", dim[i][j]);
		printf("\n");
	}
	printf("\n");

	// ��ġ��� �ٲٱ� 
	// ^= ��Ʈ���� XOR ���մ��Կ���
	// temp���� �ӽú����� ������� �ʰ� �� �����ϰ� ��ȯ(��ġ)�� ������ �� �ִ�
	for (i = 0; i < max_count; i++) {
		for (j = 0; j < i; j++) {
			dim[i][j] ^= dim[j][i];
			dim[j][i] ^= dim[i][j];
			dim[i][j] ^= dim[j][i]; 
		}
	}

	// ���
	printf("��ġ��� \n");
	for (i = 0; i < max_count; i++) {
		for (j = 0; j < max_count; j++)
			printf("%d ", dim[i][j]);
		printf("\n");
	}
}