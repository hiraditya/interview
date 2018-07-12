#include <iostream>
using namespace std;

int main()
{
	int arr[] = {1,23,12,9,30,2,50}, n = 7, k = 3;

	sort(arr,arr+n);

	for(int i=0;i<k;i++)
	{
		cout<<arr[n-i-1]<<" ";
	}
	cout<<endl;
	for(int i=0;i<k;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
    return 0;	
}
