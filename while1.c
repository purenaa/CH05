//while1.c : 반복횟수를 모를 때 주로 사용
#include <stdio.h>

int main()
{
	char ch;

	ch = 'A';
	while (ch <= 90)     //참이면 반복
	{
		printf("%c ", ch);
		ch++;
	}
	printf("\n");


	ch = 'A';   //반복을 1번은 무조건 하고 싶으면 do-while문 사용
	do {
		printf("%c ", ch);
		ch++;
	} while (ch <= 90);    //참이면 반복
	printf("\n");
	
	return 0;
}