#include <stdio.h>

void printArr(int arr[], int length);
int getMax(int arr_[], int size_);


int main()
{
	int arr[10] = {12, 27, 12, 34, 74 ,35, 64, 23, 65, 29};

    //finding the size of array
	int size = sizeof(arr)/sizeof(arr[0]);

    int max = getMax(arr, size);

    printf("--------------------------------------\n");
    printf("Elements of Array: \n");
    printf("--------------------------------------\n");
    printArr(arr, size);
    printf("--------------------------------------\n");

    printf("Maximmum value in array : %d", max);

	return 0;
}


void printArr(int arr[], int length){

    for(int i = 0; i<length; i++){
        printf("Element at Index %d : %d \n", i, arr[i]);
    }
}


int getMax(int arr_[], int size_){
    int max = 0;
    for (int i = 0; i < size_; i++){
        if(arr_[i] > max){
            max = arr_[i];
        }

    }
        return max;
}