#include <stdio.h>

void printArr(int* arr, int length);
void bubbleSort(int* arr, int length);


int main()
{
    int arr[] = {23, 34, 2, 41, 12, 29};
    int n = 6;

    printf("Array before sorting : \n");
    printArr(arr, 6);

    bubbleSort(arr, 6);
    
    printf("Array after sorting : \n");
    printArr(arr, 6);

    return 0;
}

void printArr(int* arr, int length){

    for(int i = 0; i<length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int* arr, int length){
    
    //for number of pass 
    for (int i = 0; i < length-1; i++){
        for (int j = 0; j < length-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}