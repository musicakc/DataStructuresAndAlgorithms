#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,m,i,k,sum=0;
	cin>>n>>m;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	reverse(a,a+n);
	for(i=0;i<n;i++)
	{
		if(sum<m)
			{
				sum+=a[i];
				k++;
			}
		else
			break;
		
	}
	cout<<k<<endl;	
	return 0;
}
