#include <stdio.h>
#pragma wargning(disable:4996)

// 다음 실행결과와 같은 모양으로 출력하는 프로그램 
void main()
{
	float m, k;
	k = 26;

	for (int i = 65; i <= 90; i++) {
		for (m = k; m >= 0; m--) // 왼쪽부터 26칸을 띄우고 출력 시작
			printf(" ");
		k -= 1;
		for (int j = 65; j <= i; j++)
			printf("%c", j);
		printf("\n");
	}
}

/*
실행결과
                           A
                          AB
                         ABC
                        ABCD
                       ABCDE
                      ABCDEF
                     ABCDEFG
                    ABCDEFGH
                   ABCDEFGHI
                  ABCDEFGHIJ
                 ABCDEFGHIJK
                ABCDEFGHIJKL
               ABCDEFGHIJKLM
              ABCDEFGHIJKLMN
             ABCDEFGHIJKLMNO
            ABCDEFGHIJKLMNOP
           ABCDEFGHIJKLMNOPQ
          ABCDEFGHIJKLMNOPQR
         ABCDEFGHIJKLMNOPQRS
        ABCDEFGHIJKLMNOPQRST
       ABCDEFGHIJKLMNOPQRSTU
      ABCDEFGHIJKLMNOPQRSTUV
     ABCDEFGHIJKLMNOPQRSTUVW
    ABCDEFGHIJKLMNOPQRSTUVWX
   ABCDEFGHIJKLMNOPQRSTUVWXY
  ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/