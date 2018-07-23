#include<iostream>
using namespace std;

int main()
{
	int a=14,b=18,k=2;

	int marked[b+1] = {0},changed[b+1] = {0};

	for(int i=2;i<=b;i++)
	{
		if(marked[i]==0)
		{
			for(int j=2;j*i<=b;j++)
			{
				marked[i*j] = 1;
				changed[i*j]++;
			}
		}
	}

	for(int i=a;i<=b;i++)
	{
		if(changed[i] == k)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;

   	return 0;
}