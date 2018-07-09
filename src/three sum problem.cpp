#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main()
{
	int a[] = {1,-2,-3,2,-3,0},n=6;
	
	//inserting the array in the vector
	vector<int> vec(a,a+n);

	//hash table to store the count of each element
	unordered_map<int,int> count;

	//filling the hash table
	for(int i=0;i<n;i++)
	{
		count[a[i]]++;
	}

	//sorting the vector
	sort(vec.begin(), vec.end());
	
	//removing duplicates from the vector
	vec.resize(unique(vec.begin(), vec.end()) - vec.begin());

	
	//finding triplets having sum = 0
	for(int i=0;i<vec.size();i++)
	{
		int l = i+1;
		int r = vec.size()-1;
		while(l<r)
		{
			int sum = vec[i] + vec[l] + vec[r];
			if(sum == 0)
			{
				cout<<"("<<vec[i]<<","<<vec[l]<<","<<vec[r]<<") "
				<<(count[vec[i]]*count[vec[l]]*count[vec[r]])<<" triplets"<<endl;
				l++;
				r--;
			}
			else if(sum<0)
			{
				l++;
			}
			else
			{
				r--;
			}
		}
	}
	return 0;
}