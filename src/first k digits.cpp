#include <iostream>
using namespace std;

int main()
{
	int n,k;
	cout<<"Enter n and k: ";
	cin>>n>>k;

	int rem = 1;

	for(int i=0;i<k;i++)
	{
		rem *= 10;
		cout<<rem/n;
		rem = rem%n;
	}

	cout<<endl;

    return 0;
}
