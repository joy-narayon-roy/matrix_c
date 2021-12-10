#include <stdio.h>

int main()
{
	short int rowA = 1,
			  colA = 1,
			  rowB = 1,
			  colB = 1;

	printf("A matrix size : ");
	scanf("%hd %hd", &rowA, &colA);
	printf("B matrix size : ");
	scanf("%hd %hd", &rowB, &colB);
	printf("\n");
	if (!(colA == rowB))
	{
		printf("Cannot Multiply A B Matrix.\nA row and B column are not equal!");
		return 0;
	}
	
	int matrix_A[rowA][colA],
		matrix_B[rowB][colB],
		matrix_C[rowA][colB],
		r,
		c;

	// Matrix A input
	printf("Input Matrix A - \n");
	for (r = 0; r < rowA; r++)
	{
		for (c = 0; c < colA; c++)
		{
			printf("A[%d][%d] = ", r + 1, c + 1);
			scanf("%d", &matrix_A[r][c]);
		}
		printf("\n");
	}

	// Matrix B input
	printf("Input Matrix B - \n");
	for (r = 0; r < rowB; r++)
	{
		for (c = 0; c < colB; c++)
		{
			printf("B[%d][%d] = ", r + 1, c + 1);
			scanf("%d", &matrix_B[r][c]);
		}
		printf("\n");
	}

	//Multiply
	for (r = 0; r < rowA; r++)
	{
		for (c = 0; c < colB; c++)
		{
			int tempIndex;
			matrix_C[r][c] = 0;
			for (tempIndex = 0; tempIndex < colA; tempIndex++)
			{
				matrix_C[r][c] = matrix_C[r][c] + (matrix_A[r][tempIndex] * matrix_B[tempIndex][c]);
			}
		}
	}

	//Preview A
	printf("Matrix A - \n");
	for (r = 0; r < rowA; r++)
	{
		printf("\n\t");
		for (c = 0; c < colA; c++)
		{
			printf("%d ", matrix_A[r][c]);
		}
	}
	printf("\n");

	//Preview B
	printf("Matrix B - \n");
	for (r = 0; r < rowB; r++)
	{
		printf("\n\t");
		for (c = 0; c < colB; c++)
		{
			printf("%d ", matrix_B[r][c]);
		}
	}
	printf("\n\n");

	//Result
	printf("Result -");
	for (r = 0; r < rowA; r++)
	{
		printf("\n\t");
		for (c = 0; c < colB; c++)
		{
			printf("%d ", matrix_C[r][c]);
		}
	}
	printf("\n");

	return 0;
}