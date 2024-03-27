#include <stdio.h>
#define AGE 28
#define PI 3.141592
#define NAME "홍길동"

const int a = 10;
// 소수점 6자리까지 float되는데왜 double형???
const float b = 10.56789;// 'double'에서 'float'(으)로 잘립니다.

const char c = 'K';
const char* KNOU = "한국방송통신대학교";

int main()
{
	int i = 28;
	float j = 4.0;
	char k = 'A';
	char ch[10] = "홍길동";
	// 포인터변수???
	char *p = "컴퓨터과학과"; // const char [13]'에서 'char *'(으)로 변환할 수 없습니다.

	printf("학교는: %s 이름은: %s 나이는: %d\n\n", KNOU, NAME, AGE);
	printf("%s %s 나이:%d 학점: %c 평점:%f \n", p, ch, i, k, j);

	return 0;
}
