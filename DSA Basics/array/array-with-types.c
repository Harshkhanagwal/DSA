#include <stdio.h>

int main()
{
    // normal array
    int arr[] = {12, 23, 23, 23};

    // 2D array
    int arr2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},

    };

    // multidimensional array
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
            }
        };

    return 0;
}
