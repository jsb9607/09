#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
	int grade[5];
	int size;

	grade[0] = 10;		
	grade[1] = 20;	
	grade[2] = 30;	
	grade[3] = 40;	
	grade[4] = 50;

	size = sizeof(grade)/sizeof(grade[0]);
	
	for(int i=0 ; i<size ; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	
	return 0;
}


