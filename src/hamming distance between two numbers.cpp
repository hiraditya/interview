#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	int x = a^b, bits=0;
	while(x)				//while loop to count number of set bits in a^b
	{
		bits += x%2;
		x/=2;
	}

	cout<<"Hamming distance between "<<a<<" and "<<b<<": "<<bits<<endl;

	return 0;
}