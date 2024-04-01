#include <stdio.h>												// standard input output header의 약자. 표준입출력에 관련된 내용을 담고있는 헤더파일 stdio.h을 포함
#pragma warning(disable:4996)									// 모든 경고 해제

// for문을 사용한 프로그램을 while문으로 사용을 재작성하시오. 
// 주석 필수, 상단에 학번, 이름을 출력하는 문장을 반드시 넣어야함. 
void main(void)													// main함수는 void를 받고(아무것도 받지않음) void를 리턴한다(아무것도 리턴하지 않음)
{
	printf("202434-363441 지정민\n");							// 상단 학번, 이름 출력

	int num = 0;												// 정수형 변수 num에 0 값으로 초기화
	int odd_total_num = 0;										// 정수형 변수 odd_total_num에 0 값으로 초기화(홀수값 총합을 담기위한 변수)
	int even_total_num = 0;										// 정수형 변수 even_total_num에 0 값으로 초기화(짝수값 총합을 담기위한 변수)
	printf("1~100 사이 숫자를 입력하세요: \n");					// 입력받을 값 설명출력
	scanf("%d", &num);											// 변수 num에 입력값 할당
	
	if (num <= 100) {											// num이 100이하라면

		while (num >= 1) {										// num이 1이상을 만족한다면 계속 반복
			if (num % 2 == 1) {									// num이 홀수라면
				odd_total_num = odd_total_num + num;			// odd_total_num에 num을 더한 값을 odd_total_num에 할당
			}
			else if (num % 2 == 0) {							// num이 홀수가 아니고 짝수라면
				even_total_num = even_total_num + num;			// even_total_num에 num을 더한 값을 even_total_num에 할당
			}
			num--;												// num을 1감소시킨다 
		}
		printf("홀수 값의 총 합계: %d \n", odd_total_num);		// 1부터 n까지의 홀수 값 총합을 출력
		printf("짝수 값의 총 합계: %d \n", even_total_num);		// 1부터 n까지의 짝수 값 총합을 출력
	}
	else {														// num이 100 초과라면
		printf("입력값이 100이 넘습니다. \n");					// 이 문장 출력
	}
																// main함수 리턴형이 void라 아무것도 리턴하지 않는다. 
}