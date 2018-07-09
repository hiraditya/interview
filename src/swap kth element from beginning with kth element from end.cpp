#include <iostream>
using namespace std;

int main()
{
	int a[100],k,n;
	cout<<"Enter size of array and k: ";
	cin>>n>>k;
	cout<<"Enter the elements of array\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	swap(a[k-1],a[n-k]);
	for(int i=0;i<n;i++)	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}