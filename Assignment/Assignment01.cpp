#include <stdio.h>											// standard input output header�� ����. ǥ������¿� ���õ� ������ ����ִ� ������� stdio.h�� ����
#pragma warning(disable:4996)								// ��� ��� ����

// iF���� ����� ���α׷��� SWITCH~CASE���� ����Ͽ� ���ۼ��Ͻÿ�. 
// �ּ� �ʼ�, ��ܿ� �й�, �̸��� ����ϴ� ������ �ݵ�� �־����. 
int main(void)												// main�Լ��� void�� �ް�(�ƹ��͵� ��������) int�� �����Ѵ�
{
	printf("202434-363441 ������\n");						// ��� �й�, �̸� ���

	int jumsu;												// ������ jumsu ����

	printf("0������ 100���� ������ ������ �Է��ϼ���.\n");	// �Է¹��� �� �������
	scanf("%d", &jumsu);									// ���� jumsu�� �Է°� �Ҵ�

	switch (jumsu / 10)										// jumsu�� int���̰� 10���� ������ �Ҽ����� �ȴٰ��ص� �� ���´�. 
	{
		case 10:											// jumsu / 10�� 10�� ��� (100��)
		case 9:												// jumsu / 10�� 9�� ��� (90��~99��)
			printf("%d���� A�����Դϴ�.\n", jumsu);			// �Է¹��� jumsu���� �Բ� A���� ���
			break;											// switch�� ��������
		case 8:												// jumsu / 10�� 8�� ��� (80��~89��)
			printf("%d���� B�����Դϴ�.\n", jumsu);			// �Է¹��� jumsu���� �Բ� B���� ���
			break;											// switch�� ��������
		case 7:												// jumsu / 10�� 7�� ��� (70��~79��)
			printf("%d���� C�����Դϴ�.\n", jumsu);			// �Է¹��� jumsu���� �Բ� C���� ���
			break;											// switch�� ��������
		case 6:												// jumsu / 10�� 7�� ��� (60��~69��)
			printf("%d���� D�����Դϴ�.\n", jumsu);			// �Է¹��� jumsu���� �Բ� D���� ���
			break;											// switch�� ��������
		default:											// �� case���� �ش����� �ʴ°�� default �ڵ� ����
			printf("%d���� F�����Դϴ�.\n", jumsu);			// �Է¹��� jumsu���� �Բ� F���� ���
			break;											// switch�� ��������
	}

	return 0;												// main �Լ��� int���� ��ȯ�ϱ⶧���� 0�� ����
}