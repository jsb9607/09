#include <stdio.h>
#include <stdlib.h>
#define ROWS	3
#define COLS	3

int addMarix(int x[][COLS], int y[][COLS], int z[][COLS])
{	
	for(int i=0; i<ROWS; i++)
		for(int j=0; j<COLS; j++)
			z[i][j] = x[i][j] + y[i][j];

	return z[ROWS][COLS];
}

void printMatrix(int x[][COLS])
{
	
	for(int i=0; i<ROWS; i++)
	{
		for(int j=0; j<COLS; j++)
			printf("%d ", x[i][j]);
		printf("\n");
	}
}

int main(void) 
{
	int A[ROWS][COLS] = {{2,3,0},{8,9,1},{7,0,5}};	
	int B[ROWS][COLS] = {{1,0,0},{0,1,0},{0,0,1}};
	int C[ROWS][COLS];

	addMarix(A, B, C);
	printMatrix(C);
	
	return 0;
}



