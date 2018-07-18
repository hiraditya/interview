#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int n)
{
	int count=0;
	while(n>0)
	{
		count += n/5;
		n /= 5;
	}
	return count;
}

void binarySearch(int n)
{
	int low = 1;
	int high = 1000000;

	while(low<high)
	{
		int mid = (low+high)/2;
		int count = trailingZeroes(mid);
		if(count < n)
		{
			low = mid+1;
		}
		else
		{
			high = mid;
		}
	}

	for(int i=low;i<=1000000;i++)
	{
		if(trailingZeroes(i)==n)
			cout<<i<<" ";
		else
			break;
	}
}

int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	binarySearch(n);
   	return 0;
}