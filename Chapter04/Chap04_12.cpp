#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

// 숫자 맞추기 게임 프로그램
void main()
{
	unsigned secret_num, guess_num, k, times = 1;
	unsigned again = 1, win = 0;
	char replay;

	printf("** Game Start ** \n");
	while (again) {
		printf("\n= %u번째 게임 = \n", times++);
		secret_num = rand() % 100; // rand()함수는 0~2147483647 사이 값 중 하나 무작위 선택. 100나눈 나머지값을 가지므로 0~99사이의 값

		win = 0;
		k = 1;
		while (k++ <= 7) { // 7번의 기회
			printf("0부터 99까지의 수 입력: ");
			scanf("%u", &guess_num);
			if (guess_num == secret_num) {
				win = 1;
				k = 8;
			}
			else if (guess_num < secret_num)
				printf("%u보다 큰 수 입니다.\n", guess_num);
			else
				printf("%u보다 작은 수 입니다.\n", guess_num);
		}
		if (win)
			printf("당신이 이겼습니다. 축하합니다. \n");
		else 
			printf("당신이 졌습니다. %u였습니다. 다시 시도하세요. \n", secret_num);
		printf("다시하겠습니까? (y/n)");
		getchar(); // 입력버퍼에서 직전 입력함수가 읽어들인 마지막 위치부터 시작하여 읽어들이므로 이전 개행문자 삭제를 위해 호출 scanf() 함수의 경우 이전 공백문자는 무시 
		
		replay = getchar();
		if (!(replay == 'y' || replay == 'Y')) // y또는 Y가 아닌 문자일 경우 종료
			again = 0;
	}
	printf("\n** Good Bye **\n");
}