#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int a[] = {1,3,2},n=3,result[3];

	sort(a,a+n);

	for(int i=0,j=0;i<(n/2);i++,j+=2)	//odd positions
	{
		result[j] = a[i];
	}

	for(int i=0,j=1;i<(n/2);i++,j+=2)	//even positions
	{
		result[j] = a[n-i-1];
	}

	if(n%2==1)
	{
		result[n-1] = a[n/2];
	}

	for(int i=0;i<n;i++)	cout<<result[i]<<" ";cout<<endl;

   	return 0;
}