#include <stdio.h>
 
// 예제 2-5 매크로 상수 정의 프로그램
#define program void main() // 매크로명 program으로 void main()을 치환
#define print printf
#define MAX 100
#define MIN 10

program
{
	print("MAX:%d  MIN:%d\n",MAX,MIN);
}