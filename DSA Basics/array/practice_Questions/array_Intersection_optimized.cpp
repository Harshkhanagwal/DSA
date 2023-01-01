#include <iostream>
using namespace std;


void arrIntersection(int arr[], int arr2[], int n, int m)
{   
    
    int i = 0, j = 0;
    int ans = 0;

    while (i < n && j < m){
        if (arr[i] == arr2[j]){
            ans = arr[i];
            cout << ans << " ";
            i++;
            j++;
        }
        else if(arr[i] < arr2[j]){
            i++;
        }

        else{
            j++;
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
    int arr2[] = {2 , 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    arrIntersection(arr, arr2, n, m);


    return 0;
}
