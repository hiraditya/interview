#include <iostream>
using namespace std;

int string_to_int(string s)
{
	int j = 1, num=0;
	for(int i=s.length()-1;i>=0;i--,j*=10)
	{
		num += int(s[i]-48) * j;
	}
	return num;
}

int main()
{
	int ans = string_to_int("1234");
	cout<<ans<<endl;
	return 0;
}