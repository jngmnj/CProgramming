#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

// ���� ���߱� ���� ���α׷�
void main()
{
	unsigned secret_num, guess_num, k, times = 1;
	unsigned again = 1, win = 0;
	char replay;

	printf("** Game Start ** \n");
	while (again) {
		printf("\n= %u��° ���� = \n", times++);
		secret_num = rand() % 100; // rand()�Լ��� 0~2147483647 ���� �� �� �ϳ� ������ ����. 100���� ���������� �����Ƿ� 0~99������ ��

		win = 0;
		k = 1;
		while (k++ <= 7) { // 7���� ��ȸ
			printf("0���� 99������ �� �Է�: ");
			scanf("%u", &guess_num);
			if (guess_num == secret_num) {
				win = 1;
				k = 8;
			}
			else if (guess_num < secret_num)
				printf("%u���� ū �� �Դϴ�.\n", guess_num);
			else
				printf("%u���� ���� �� �Դϴ�.\n", guess_num);
		}
		if (win)
			printf("����� �̰���ϴ�. �����մϴ�. \n");
		else 
			printf("����� �����ϴ�. %u�����ϴ�. �ٽ� �õ��ϼ���. \n", secret_num);
		printf("�ٽ��ϰڽ��ϱ�? (y/n)");
		getchar(); // �Է¹��ۿ��� ���� �Է��Լ��� �о���� ������ ��ġ���� �����Ͽ� �о���̹Ƿ� ���� ���๮�� ������ ���� ȣ�� scanf() �Լ��� ��� ���� ���鹮�ڴ� ���� 
		
		replay = getchar();
		if (!(replay == 'y' || replay == 'Y')) // y�Ǵ� Y�� �ƴ� ������ ��� ����
			again = 0;
	}
	printf("\n** Good Bye **\n");
}