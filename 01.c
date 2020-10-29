#include <stdio.h>
#include <stdlib.h>
#define SIZE	5


int main(void) 
{
	int i;
	int grade[5];
	int average;
	int sum;
	
	printf("5명의 점수를 입력하세요.\n");

	for(i=0; i<SIZE ; i++)
	{
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	
	for(i=0; i<SIZE ; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}

	average = sum/SIZE;
	printf("성적평균 : %d\n", average);

	
	return 0;
}


