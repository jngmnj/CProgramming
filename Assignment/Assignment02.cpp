#include <stdio.h>												// standard input output header�� ����. ǥ������¿� ���õ� ������ ����ִ� ������� stdio.h�� ����
#pragma warning(disable:4996)									// ��� ��� ����

// for���� ����� ���α׷��� while������ ����� ���ۼ��Ͻÿ�. 
// �ּ� �ʼ�, ��ܿ� �й�, �̸��� ����ϴ� ������ �ݵ�� �־����. 
void main(void)													// main�Լ��� void�� �ް�(�ƹ��͵� ��������) void�� �����Ѵ�(�ƹ��͵� �������� ����)
{
	printf("202434-363441 ������\n");							// ��� �й�, �̸� ���

	int num = 0;												// ������ ���� num�� 0 ������ �ʱ�ȭ
	int odd_total_num = 0;										// ������ ���� odd_total_num�� 0 ������ �ʱ�ȭ(Ȧ���� ������ ������� ����)
	int even_total_num = 0;										// ������ ���� even_total_num�� 0 ������ �ʱ�ȭ(¦���� ������ ������� ����)
	printf("1~100 ���� ���ڸ� �Է��ϼ���: \n");					// �Է¹��� �� �������
	scanf("%d", &num);											// ���� num�� �Է°� �Ҵ�
	
	if (num <= 100) {											// num�� 100���϶��

		while (num >= 1) {										// num�� 1�̻��� �����Ѵٸ� ��� �ݺ�
			if (num % 2 == 1) {									// num�� Ȧ�����
				odd_total_num = odd_total_num + num;			// odd_total_num�� num�� ���� ���� odd_total_num�� �Ҵ�
			}
			else if (num % 2 == 0) {							// num�� Ȧ���� �ƴϰ� ¦�����
				even_total_num = even_total_num + num;			// even_total_num�� num�� ���� ���� even_total_num�� �Ҵ�
			}
			num--;												// num�� 1���ҽ�Ų�� 
		}
		printf("Ȧ�� ���� �� �հ�: %d \n", odd_total_num);		// 1���� n������ Ȧ�� �� ������ ���
		printf("¦�� ���� �� �հ�: %d \n", even_total_num);		// 1���� n������ ¦�� �� ������ ���
	}
	else {														// num�� 100 �ʰ����
		printf("�Է°��� 100�� �ѽ��ϴ�. \n");					// �� ���� ���
	}
																// main�Լ� �������� void�� �ƹ��͵� �������� �ʴ´�. 
}