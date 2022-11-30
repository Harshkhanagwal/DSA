#include <stdio.h>

void printArr(int arr[], int length);
void reverseArr(int arr_[], int size_);

int main()
{
	int arr[10] = {12, 27, 12, 34, 74 ,35, 4, 23, 65, 29};

    //finding the size of array
	int size = sizeof(arr)/sizeof(arr[0]);

    printf("--------------------------------------\n");
    printf("Normal Array: \n");
    printArr(arr, size);
    printf("--------------------------------------\n");


    printf("Reversed Array: \n");
    reverseArr(arr, size);
    printf("--------------------------------------\n");


	return 0;
}


void printArr(int arr[], int length){

    for(int i = 0; i<length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArr(int arr[], int length){
    int index = length -1 ;
    for(int i = index; i>=0; i--){
        printf("%d ", arr[i]);
    }
    printf("\n");

}
