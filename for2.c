//for2.c
#include <stdio.h>

int main()
{
	//1. 메모리 할당(변수선언)
	int i, sum = 0;
	int start, end, tmp;

	//2. 데이터 입력
	printf("start ? ");
	scanf("%d", &start);       //1    ,100
	printf("end ? ");
	scanf("%d", &end);         //100  ,1

	if (start > end)       //교환 알고리즘
	{
		tmp = start;
		start = end;
		end = tmp;
	}

	//3. 처리(누적)
	for (i = start; i <= end; i++)
	{
		sum += i;
		if (sum > 3000)
			break;
	}
	//4. 출력
	if (i-1 == end)
		printf("%d부터 %d 까지의 합 : %d\n", start, end, sum);
	else
		printf("%d부터 %d 까지의 합 : %d\n", start, i, sum);

	return 0;
}