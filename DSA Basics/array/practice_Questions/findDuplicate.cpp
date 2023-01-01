#include <iostream>
using namespace std;


void findDup(int arr[], int size)
{   
    int ans =  0;
    for (int i = 0; i < size; i ++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i<size; i++){
        ans = ans^ i;
    }

    cout << ans;
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}


int main()
{

    // swap alternate
    int arr[] = {1, 2, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);
    findDup(arr, size);


    return 0;
}
