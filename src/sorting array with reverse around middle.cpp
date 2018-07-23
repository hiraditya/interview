#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[] = {1,3,6,4,5,2,7},b[7],n=7;

	for(int i=0;i<n;i++)
	{
		b[i] = a[i];	//copy array a into b  
	}

	sort(b,b+n);		//sorting array b
	bool flag = true;

	for(int i=0;i<n;i++)	//comparing ith element in a with ith and (n-i-1)th element in b
	{
		if(b[i]!=a[i] && b[i]!=a[n-i-1])
		{
			flag = false;
			break;
		}
	}

	if(flag)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}

   	return 0;
}
