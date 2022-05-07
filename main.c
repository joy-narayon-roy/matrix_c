#include <stdio.h>
#include <stdlib.h>
#include "matix.h"
// void matrix_input(int *r, int *c, int **mat)
// {
//     printf("Printing \n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d ", sizeof mat[i][j]);
//         }
//         printf("\n");
//     }
// }

// int max()
// {

//     for (int i = 0; i < rA; i++)
//     {
//         for (int j = 0; j < cA; j++)
//         {
//             printf("%d ", matrix_A[i][j]);
//         }
//         printf("\n");
//     }
// }

int main()
{
    int rA = 3, cA = 3;
    int **matrix_A;
    int **res;
    printf("Please input matrix size -(r c) : ");
    scanf("%d %d", &rA, &cA);
    matrix_A = input_matrix(rA, cA, 'A');

    res = addition(rA, cA, matrix_A, matrix_A);

    print_matrix('R', rA, cA, res);
}