//while1.c : �ݺ�Ƚ���� �� �� �ַ� ���
#include <stdio.h>

int main()
{
	char ch;

	ch = 'A';
	while (ch <= 90)     //���̸� �ݺ�
	{
		printf("%c ", ch);
		ch++;
	}
	printf("\n");


	ch = 'A';   //�ݺ��� 1���� ������ �ϰ� ������ do-while�� ���
	do {
		printf("%c ", ch);
		ch++;
	} while (ch <= 90);    //���̸� �ݺ�
	printf("\n");
	
	return 0;
}