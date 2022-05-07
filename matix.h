#include <stdio.h>

void print_matrix(char name, int r, int c, int **matrix)
{
    printf("\n[%c] = ", name);
    for (int i = 0; i < r; i++)
    {
        printf("\t");
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j]);
            // scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
}

int **input_matrix(int row, int col, char name)
{
    int **array = (int **)malloc(sizeof(int *) * row);
    int i, j;
    for (i = 0; i < row; i++)
    {
        array[i] = (int *)malloc(sizeof(int) * col);
        for (j = 0; j < col; j++)
        {
            printf("%c[%d][%d] = ", name, i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }
    return array;
}

int **addition(int row, int col, int **matrix_A, int **matrix_B)
{
    int **matrix_C = (int **)malloc(sizeof(int *) * row);
    int r, c;
    for (r = 0; r < row; r++)
    {
        matrix_C[r] = (int *)malloc(sizeof(int) * col);
        for (c = 0; c < col; c++)
        {
            matrix_C[r][c] = matrix_A[r][c] + matrix_B[r][c];
        }
    }

    return matrix_C;
}