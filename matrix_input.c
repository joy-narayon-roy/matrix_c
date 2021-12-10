#include <stdio.h>

int main()
{
	int row = 0, col = 0;
	printf("Matrix Size - ");
	scanf("%d %d", &row, &col);
	printf("\n");

	int matrix[row][col];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("A[%d][%d] = ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}

	//Print Matrix
	printf("Your matrix\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}