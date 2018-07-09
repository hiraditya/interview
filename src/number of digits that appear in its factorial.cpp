#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout<<"Enter a number: ";
	long n;
	cin>>n;
	double logval = 0;
	for(long i=1;i<=n;i++)
	{
		logval += log10(i);
	}

	cout<<floor(logval) + 1 <<" digits\n";

	return 0;
}