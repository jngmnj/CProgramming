#include <stdio.h>
#pragma wargning(disable:4996)

// ���� �������� ���� ������� ����ϴ� ���α׷� 
void main()
{
	float m, k;
	k = 26;

	for (int i = 65; i <= 90; i++) {
		for (m = k; m >= 0; m--) // ���ʺ��� 26ĭ�� ���� ��� ����
			printf(" ");
		k -= 1;
		for (int j = 65; j <= i; j++)
			printf("%c", j);
		printf("\n");
	}
}

/*
������
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