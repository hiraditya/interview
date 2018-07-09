#include <iostream>
using namespace std;

int find_kth_element(int a[],int n,int b[],int m,int k)
{
	int i=0,j=0,ans,c=0;
	while(i<n && j<m)
	{
		if(a[i]<=b[j])
		{
			ans = a[i];
			c++;
			if(c==k)	break;
			i++;
		}
		else
		{
			ans = b[j];
			c++;
			if(c==k)	break;
			j++;
		}
	}
	if(c<k)
	{
		if(i!=n)
		{
			for(;i<n;i++)
			{
				ans = a[i];
				c++;
				if(c==k)	break;
			}
		}
		else
		{
			for(;j<m;j++)
			{
				ans = b[j];
				c++;
				if(c==k)	break;
			}
		}
	}
	return ans;
}

int main()
{
	int a[] = {1,2,4,5},n=4,b[]={2,3,4,5,7},m=5,k=6;
	cout<<find_kth_element(a,n,b,m,k)<<endl;
	return 0;
}