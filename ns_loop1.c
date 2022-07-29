//ns_loop1.c
#include <stdio.h>

int main()
{
	char ch, i;
	char in_char;

	printf("input char ? ");
	in_char = getchar();

	//중첩반복문 (중괄호 안에 중괄호 있는 형태)
	for (i = 1; i <= 3; i++) 
	{
		ch = 'A';
		while (ch <= 90)     //참이면 반복
		{
			printf("%c ", ch);     //A,B,C,D,E,F,G,H
			if (ch == in_char)
				//break;
				goto move;
			ch++;
		}
		printf("\n");
	}
move:     //레이블명

	printf("End \n");

	return 0;
}