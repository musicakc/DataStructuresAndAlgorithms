/* Merge Sort */
#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r)
{
	int L[m-l+1], R[r-m];
	int i,j;
	//Data copied to temp arrays
	for(i=0; i<m-l+1; i++)
		L[i] = arr[l+i];
	for(j=0; j<r-m; j++)
		R[j] = arr[m+1+j];

	i=0,j=0;
	int k = l;
	while(i<m-l+1 && j<r-m)
	{
		if(L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;

	}
	while(i<m-l+1)
	{
		arr[k] = L[i];
		k++; i++;
	}
	while(j<r-m)
	{
		arr[k] = R[j];
		k++; j++;
	}

}

void mergesort(int arr[], int l, int r)
{
	if(l < r)
	{
		int m = (l+r)/2;
		mergesort(arr, l, m);
		mergesort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main()
{
	int arr[] = {4, 7, 3, 55, 90, 21, 2, 6, 0, 3, 45};
	int arrlength = sizeof(arr)/sizeof(*arr);
	mergesort(arr, 0, arrlength);
	for(int i=0; i<arrlength; i++)
	cout<< arr[i] << " " ;
	return 0;
}