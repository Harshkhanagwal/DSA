#include <stdio.h>

void printArr(int arr[], int length);
int sum(int arr_[], int size_);

int main()
{
	int arr[10] = {12, 27, 12, 34, 74 ,35, 4, 23, 65, 29};

    //finding the size of array
	int size = sizeof(arr)/sizeof(arr[0]);

    //storing the sum value returend by sum function
    int ans = sum(arr, size);

    printf("--------------------------------------\n");
    printf("Elements of Array: \n");
    printf("--------------------------------------\n");
    printArr(arr, size);

    printf("--------------------------------------\n");
    printf("Sum of all value in array : %d \n", ans);
    printf("--------------------------------------\n");


	return 0;
}


void printArr(int arr[], int length){

    for(int i = 0; i<length; i++){
        printf("Element at Index %d : %d \n", i, arr[i]);
    }
}


// find minimum value of an array
int sum(int arr_[], int size_){
    int temp = 0;  

    for (int i = 0; i < size_; i++){
        temp += arr_[0];
    }
        return temp;
}
