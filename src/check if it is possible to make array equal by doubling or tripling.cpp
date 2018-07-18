#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a[] = {60,100,200},n=3;

	for(int i=0;i<n;i++)
	{
		while(a[i]%2==0)
		{
			a[i] /= 2;
		}

		while(a[i]%3==0)
		{
			a[i] /= 3;
		}
	}

	for(int i=1;i<n;i++)
	{
		if(a[i]!=a[0])
		{
			cout<<"No\n";
			return 0;
		}
	}

	cout<<"Yes\n";

   	return 0;
}