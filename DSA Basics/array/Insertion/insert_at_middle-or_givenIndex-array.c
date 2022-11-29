#include <stdio.h>

int main()
{
	int arr[100] = {12, 23, 23, 34, 34 ,35, 64, 23, 65, 29};
	int i, value, pos, n = 10;

	// print the original array
	for (i = 0; i < n; i++)
    {
		printf("%d ", arr[i]);
    }
	printf("\n");

	// element to be inserted
	value = 50;

	// position at which element is to be inserted
	pos = 5;

	// increase the size by 1
	n++;

	// shift elements forward
	for (i = n - 1; i >= pos; i--){
		arr[i] = arr[i - 1];
    }

	// insert value at pos
	arr[pos - 1] = value;

	// print the updated array
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
    }

	printf("\n");

	return 0;
}
