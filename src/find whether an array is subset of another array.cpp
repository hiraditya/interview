#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int arr1[] = {1,3,7,4,8,12}, m = 6, arr2[]={3,4,7}, n = 3;

	unordered_map<int,int> hash;

	for(int i=0;i<m;i++)
	{
		hash[arr1[i]] = 1;
	}

	bool is_subset = true;

	for(int i=0;i<n;i++)
	{
		if(hash[arr2[i]]!=1)
		{
			is_subset = false;
			break;
		}
	}

	if(is_subset)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}

    return 0;	
}
