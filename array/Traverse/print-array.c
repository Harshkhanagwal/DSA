#include <stdio.h>

void printArr(int arr[], int length);

int main()
{
    // normal array
    int arr[] = {12, 24, 32, 73, 84, 73, 27, 69};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printArr(arr, size);

    return 0;
}

void printArr(int arr[], int length){

    for(int i = 0; i<length; i++){
        printf("Element at Index %d : %d \n", i, arr[i]);
    }
}
