#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[] = {3,1,1},b[] = {1,2,2},n=3;

	sort(a,a+n);
	sort(b,b+n);

	int minops = 0;

	for(int i=0;i<n;i++)
	{
		minops += abs(a[i]-b[i]);		
	}

	cout<<minops<<endl;

   	return 0;
}