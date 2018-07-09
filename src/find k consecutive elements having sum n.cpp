#include <iostream>
using namespace std;

int find_k_elements(int a[],int n,int k)
{
	if(k>n)	return -1;
	int sum = 0;
	for(int i=0;i<k;i++)
	{
		sum += a[i];
	}
	if(sum == n)	return 0;

	for(int i=k;i<n;i++)
	{
		sum -= a[i-k];
		sum += a[i];
		if(sum == n)	return i-k+1;
	}
	return -1;
}


int main()
{
	int a[] = {1,2,3,3,1}, n = 5, k = 3;
	int ind = find_k_elements(a,n,k);
	if(ind == -1)
	{
		cout<<"No solution exists\n";
	}
	else
	{
		for(int i=ind;i<ind+k;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}