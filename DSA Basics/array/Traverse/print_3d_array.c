#include <stdio.h>

int main()
{

    // normal array
    int arr3D[3][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9},
        },
        {
            {11, 12, 13},
            {14, 15, 16},
            {17, 18, 19},
        },
        {
            {21, 22, 23},
            {24, 25, 26},
            {27, 28, 29},
        }};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Element at Index arr[%d][%d][%d] : ", i, j, k);
                printf("%d \n", arr3D[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
