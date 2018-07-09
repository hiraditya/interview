#include <iostream>
using namespace std;

bool power_of_two(int num)
{
	return !(num & (num-1));
}

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;

	if(power_of_two(n-1))	cout<<"Yes\n";
	else	cout<<"No\n";

	return 0;
}