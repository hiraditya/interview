#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> adj[100];
	int n,m,u,v,i;
	cout<<"Enter number of vertices and edges:\n";
	cin>>n>>m;
	cout<<"Enter edges(u and v):\n";
	for(i=0;i<m;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(i=0;i<n;i++)
	{
		cout<<i;
		for(auto it: adj[i])
		{
			cout<<"->"<<it;
		}
		cout<<endl;
	}

    return 0;
}
