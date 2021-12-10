#include <stdio.h>

int main()
{
	int row = 1, col = 1;
	printf("Matrix Size ");
	scanf("%d %d", &row, &col);
	printf("\n");

	int matrix_A[row][col], matrix_B[row][col], matrix_C[row][col];
	//Input A matrix
	printf("Please Input Matrix-A : \n");
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			printf("A[%d][%d] = ", r + 1, c + 1);
			scanf("%d", &matrix_A[r][c]);
		}
		printf("\n");
	}

	//Input B matrix
	printf("Please Input Matrix-B : \n");
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			printf("B[%d][%d] = ", r + 1, c + 1);
			scanf("%d", &matrix_B[r][c]);
		}
		printf("\n");
	}

	//Addition
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			matrix_C[r][c] = matrix_A[r][c] + matrix_B[r][c];
		}
	}

	//Result
	printf("Result A + B = \n");
	for (int r = 0; r < row; r++)
	{
		printf("\t");
		for (int c = 0; c < col; c++)
		{
			printf("%d  ", matrix_C[r][c]);
		}
		printf("\n");
	}
}