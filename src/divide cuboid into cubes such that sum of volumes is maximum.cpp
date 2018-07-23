#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int l=2,b=3,h=8;
	int x;

	x = __gcd(__gcd(l,b),h);

	cout<<"Side: "<<x<<" No.: "<<(l*b*h)/(x*x*x)<<endl;

	

   	return 0;
}