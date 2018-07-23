#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[] = {3,8,9,2},n=2;

	sort(a,a+(2*n));

	for(int i=0;i<n;i++)
	{
		cout<<"("<<a[i]<<","<<a[(2*n)-i-1]<<")"<<" ";
	}	
	cout<<endl;

   	return 0;
}