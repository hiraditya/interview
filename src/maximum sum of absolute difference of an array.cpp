#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[] = {1,2,3,8,4},n=5;

	sort(a,a+n);

	vector<int> sequence;

	for(int i=0;i<n/2;i++)
	{
		sequence.push_back(a[i]);
		sequence.push_back(a[n-i-1]);
	}

	if(n%2==1)
	{
		sequence.push_back(a[n/2]);
	}

	int sum = 0;

	for(int i=0;i<sequence.size();i++)
	{
		sum += abs(sequence[i]-sequence[(i+1)%sequence.size()]);
	}

	cout<<sum<<endl;

    return 0;	
}
