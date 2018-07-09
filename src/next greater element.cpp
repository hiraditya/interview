#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int a[] = {2,5,3,25}, n = 4,nge[100];;
	
	// First approach

	for(int i=0;i<n;i++)
	{
		int next = -1;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				next = a[j];
				break;
			}
		}
		cout<<a[i]<<" = "<<next<<endl;
	}

	cout<<endl;

	// Second Approach

	stack<int> ngestack;
	ngestack.push(0);

	for(int i=1;i<n;i++)
	{
		int next = i;
		while(!ngestack.empty() && a[next] > a[ngestack.top()])
		{
			nge[ngestack.top()] = next;
			ngestack.pop();
		}
		ngestack.push(next);
	}

	while(!ngestack.empty())
	{
		nge[ngestack.top()] = -1;
		ngestack.pop();
	}	

	for(int i=0;i<n;i++)
	{
		if(nge[i]!=-1)
		cout<<a[i]<<" = "<<a[nge[i]]<<endl;
		else
		cout<<a[i]<<" = "<<nge[i]<<endl;	
	}

    return 0;
}
