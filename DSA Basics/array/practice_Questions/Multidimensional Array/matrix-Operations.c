#include <stdio.h>

/*

1. sum of matrix
2. Subtraction
3. Multiplication

*/
void printMatrix(int matrix[3][3]);

// two get the sum of two matrix
void sumTwoMatrix(int matrix1[3][3], int matrix2[3][3], int sumMatrix[3][3]);

// for subtraction
void subtraction(int matrix1[3][3], int matrix2[3][3], int sub[3][3]);

// for multiplication
void multiplication(int matrix1[3][3], int matrix2[3][3], int mul[3][3]);

// for division
void division(int matrix1[3][3], int matrix2[3][3], int division[3][3]);

int main()
{   

    //--------------------creating base matrix----------------------
    int matrix1[3][3] =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};
    int matrix2[3][3] =
        {
            {11, 12, 13},
            {14, 15, 16},
            {17, 18, 19}};


    //--------------------empty matrix to store solution---------------------
    int matrix3[3][3];

    printf("\n");

    //--------------------printing base matrix----------------------
    printf("--------------------------------\n");
    printf("Matrix 1: \n");
    printMatrix(matrix1);
    
    printf("\n");

    printf("Matrix 2: \n");
    printMatrix(matrix2);
    printf("--------------------------------\n");

    //--------------------printing sum of matrixs----------------------

    printf("--------------------------------\n");
    sumTwoMatrix(matrix1, matrix2, matrix3);
    printf("--------------------------------\n");

    //--------------------printing subtraction of matrixs----------------------
    printf("--------------------------------\n");
    subtraction(matrix1, matrix2, matrix3);
    printf("--------------------------------\n");

    //--------------------printing multiplication of matrixs----------------------
    printf("--------------------------------\n");
    multiplication(matrix1, matrix2, matrix3);
    printf("--------------------------------\n");

    //--------------------printing division of matrixs----------------------
    printf("--------------------------------\n");
    division(matrix1, matrix2, matrix3);
    printf("--------------------------------\n");
}


void printMatrix(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void sumTwoMatrix(int matrix1[3][3], int matrix2[3][3], int sumMatrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of matrix1 and matrix 2 :");
    printf("\n");
    printMatrix(sumMatrix);
}


void subtraction(int matrix1[3][3], int matrix2[3][3], int sub[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("subtraction of matrix1 and matrix 2 :");
    printf("\n");
    printMatrix(sub);
}

void multiplication(int matrix1[3][3], int matrix2[3][3], int mul[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }

    printf("multiplication of matrix1 and matrix 2 :");
    printf("\n");
    printMatrix(mul);
}

void division(int matrix1[3][3], int matrix2[3][3], int division[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            division[i][j] = matrix1[i][j] / matrix2[i][j];
        }
    }

    printf("division of matrix1 and matrix 2 :");
    printf("\n");
    printMatrix(division);
}