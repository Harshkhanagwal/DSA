#include <stdio.h>


int main()
{

    // normal array
    int arr2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element at Index arr[%d][%d] : ", i, j);
            printf("%d", arr2D[i][j]);
        }
        printf("\n");
    }

    return 0;
}
