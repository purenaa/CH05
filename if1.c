//if1.c
#include <stdio.h>
#include <stdlib.h>

//���: ��������, �ݺ�����, ��Ÿ���� 
//�������� : if, switch
//�ݺ����� : for, while, do..while
//��Ÿ���� : break, continue, goto

int main()
{
	int score;

	printf("���� ? ");
	scanf("%d", &score);

	//exit(1);   //���α׷� ��� ����
	if (score > 100 || score < 0)
	{
		printf("���� ������ 0~100�Դϴ� \n");
		exit(1);      //���α׷� ��� ����
	}

	if (score >= 90)
		printf("%d, A���� \n", score);
	else if (score >= 80)
		printf("%d, B���� \n", score);
	else if (score >= 70)
		printf("%d, C���� \n", score);
	else if (score >= 60)
		printf("%d, D���� \n", score);
	else
		printf("%d, ��¹ٶ� !!! \n", score);

	printf("End \n");

	return 0;
}