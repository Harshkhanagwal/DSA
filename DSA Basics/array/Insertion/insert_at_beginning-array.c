#include <stdio.h>

int main()
{
	int arr[100] = {12, 23, 23, 34, 34 ,35, 64, 23, 65, 29};
	int i, value, n = 10;

	// print the original array
	for (i = 0; i < n; i++)
    {
		printf("%d ", arr[i]);
    }
	printf("\n");

	// element to be inserted
	value = 50;

	// increase the size by 1
	n++;

	// shift elements forward
	for (i = n - 1; i >= 0; i--){
		arr[i] = arr[i - 1];
    }

	// insert value at pos
	arr[0] = value;

	// print the updated array
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
    }

	printf("\n");

	return 0;
}
