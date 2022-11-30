#include <stdio.h>

void printArr(int arr[], int length);

int main()
{
	int arr[100] = {12, 23, 12, 34, 74 ,35, 64, 23, 65, 29};
	int i, position, value, n = 10;

    position = 4;

    printf("Array Before Deletion :\n");
    printArr(arr, n);

    if (position > 10){
        printf("Enter Valid Position");
    } else {
        for(int i = position-1; i <= n; i++){
            arr[i] = arr[i+1];
        }
    }

	printf("\n");

    printf("Array After Deletion :\n");
    printArr(arr, n);

	printf("\n");

	return 0;
}


void printArr(int arr[], int length){

    for(int i = 0; i<length; i++){
        printf("Element at Index %d : %d \n", i, arr[i]);
    }
}
