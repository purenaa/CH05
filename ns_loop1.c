//ns_loop1.c
#include <stdio.h>

int main()
{
	char ch, i;
	char in_char;

	printf("input char ? ");
	in_char = getchar();

	//��ø�ݺ��� (�߰�ȣ �ȿ� �߰�ȣ �ִ� ����)
	for (i = 1; i <= 3; i++) 
	{
		ch = 'A';
		while (ch <= 90)     //���̸� �ݺ�
		{
			printf("%c ", ch);     //A,B,C,D,E,F,G,H
			if (ch == in_char)
				//break;
				goto move;
			ch++;
		}
		printf("\n");
	}
move:     //���̺��

	printf("End \n");

	return 0;
}