#include <iostream>
using namespace std;


int main()
{
	int m1[][50] = {{1,0,0},
			        {0,1,0},
			  	    {0,0,1}};
	int m2[][50] = {{1,2,0},
			  		{0,1,4},
			      	{6,0,1}};	
	int m[50][50],p=3,n=3,q=3;

	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			for(int k=0;k<n;k++)
			{
				m[i][j] += m1[i][k]*m2[k][j];
			}
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}