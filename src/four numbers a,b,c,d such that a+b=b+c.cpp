#include <iostream>
#include <map>
using namespace std;

int main()
{
	int arr[] = {1,3,4,5,6}, n = 5;

	map<int,pair<int,int>> hash;
	bool found = false;

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int sum = arr[i]+arr[j];
			if(hash.find(sum)!=hash.end())
			{
				found = true;
				cout<<"("<<arr[i]<<","<<arr[j]<<") and ("<<hash[sum].first<<","<<hash[sum].second<<")\n";
				break;
			}
			else
			{
				hash[sum] = {arr[i],arr[j]};
			}
		}
		if(found)	break;
	}

	if(!found)
	{
		cout<<"No pairs found\n";
	}

    return 0;	
}
