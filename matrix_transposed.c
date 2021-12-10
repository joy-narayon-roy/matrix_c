#include <stdio.h>

int main()
{
	short int row = 0, col = 0;
	printf("Matrix size - ");
	scanf("%hi %hi", &row, &col);
	printf("\n");

	int matrix[row][col], matrix_t[col][row], r, c;

	printf("Input your matrix -\n");
	for (r = 0; r < row; r++)
	{
		for (c = 0; c < col; c++)
		{
			printf("A[%i][%i] = ", r, c);
			scanf("%i", &matrix[r][c]);
		}
		printf("\n");
	}

	printf("\n\n");
	for (r = 0; r < row; r++)
	{
		for (c = 0; c < col; c++)
		{
			matrix_t[c][r] = matrix[r][c];
		}
	}

	//Your Matrix
	printf("\nYour Matrix - \n");
	for (r = 0; r < row; r++)
	{
		for (c = 0; c < col; c++)
		{
			printf("%d ", matrix[r][c]);
		}
		printf("\n");
	}

	//Result
	printf("\nResult - ");
	for (r = 0; r < col; r++)
	{
		printf("\n\t");
		for (c = 0; c < row; c++)
		{
			printf("%i ", matrix_t[r][c]);
		}
	}
	printf("\n");

	return 0;
}