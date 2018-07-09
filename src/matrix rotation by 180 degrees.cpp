#include <iostream>
using namespace std;

void transpose(int a[][3],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			swap(a[i][j],a[j][i]);
		}
	}
}

void reverse(int a[][3],int n)
{
	for(int i=0;i<(n/2);i++)
	{
		for(int j=0;j<n;j++)
		{
			swap(a[i][j],a[n-i-1][j]);
		}
	}	
}

int main()
{
	int a[3][3] = {{1,2,3},
				   {4,5,6},
				   {7,8,9}};
	int n = 3;

	//+90 degree
	transpose(a,n);
	reverse(a,n);

	//+180 degree
	transpose(a,n);
	reverse(a,n);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;	
}
