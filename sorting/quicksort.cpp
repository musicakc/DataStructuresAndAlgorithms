/* Quick Sort */
#include <iostream>

using namespace std;

void swapelm(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int l, int h)
{
	int pivot = arr[h];	
	int i,j;
	i = l - 1; 
	for(j = l; j < h; j++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			swapelm(&arr[i], &arr[j]);
		}

	}
	swapelm(&arr[i+1], &arr[h]);
	return (i+1);
}

void quicksort(int arr[], int l, int h)
{
	if(l < h)
	{
		int pi = partition(arr,l,h);
		quicksort(arr, l, pi - 1);
		quicksort(arr, pi + 1, h);
	}
}

int main()
{
	int arr[] = {4, 7, 3, 55, 90, 21, 2, 6, 0, 3, 45};
	int arrlength = sizeof(arr)/sizeof(*arr);
	quicksort(arr, 0, arrlength - 1);
	for(int i=0; i<arrlength; i++)
	cout<< arr[i] << " " ;
	return 0;
}