#include <iostream>
using namespace std;


void findUnique(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
      ans = ans ^ arr[i];
    }

    cout << "Unique Element : " << ans;
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
    int arr[] = {12, 2, 12, 89, 70, 2,  70};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);
    findUnique(arr, size);


    return 0;
}
