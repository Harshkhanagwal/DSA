#include <iostream>
using namespace std;


void arrIntersection(int arr[], int arr2[], int n, int m)
{   
    
    for (int i = 0; i < n; i ++)
    { 
        int element = arr[i];

        for (int j = 0; j<m; j++){
            if (element == arr2[j]){
                cout << element << " " ;
                arr2[j] = -12313;
                break;
            }
        }
    }



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
    int arr2[] = {5, 2 , 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    arrIntersection(arr, arr2, n, m);


    return 0;
}
