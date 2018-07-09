#include <iostream>
using namespace std;

int main()
{
	string s,result="";
	cout<<"Enter a string: \n";
	cin>>s;

	int hash[123]={0};
	//Remove duplicates from s
	for(int i=0;i<s.length();i++)
	{
		if(hash[s[i]] == 0)
		{
			hash[s[i]] = 1;
			result += s[i];
		}
	}

	cout<<result<<endl;

	return 0;
}