//for2.c
#include <stdio.h>

int main()
{
	//1. �޸� �Ҵ�(��������)
	int i, sum = 0;
	int start, end, tmp;

	//2. ������ �Է�
	printf("start ? ");
	scanf("%d", &start);       //1    ,100
	printf("end ? ");
	scanf("%d", &end);         //100  ,1

	if (start > end)       //��ȯ �˰���
	{
		tmp = start;
		start = end;
		end = tmp;
	}

	//3. ó��(����)
	for (i = start; i <= end; i++)
	{
		sum += i;
		if (sum > 3000)
			break;
	}
	//4. ���
	if (i-1 == end)
		printf("%d���� %d ������ �� : %d\n", start, end, sum);
	else
		printf("%d���� %d ������ �� : %d\n", start, i, sum);

	return 0;
}