#include<iostream>
using namespace std;

int main()
{
	string s = "google";

	for(int i=1;i<s.length();i++)
	{
		if(s[i] == s[i-1])
		{
			s[i] = 'a';

			while(s[i]==s[i-1] || (i<=s.length()-2 && s[i]==s[i+1]))
			{
				s[i]++;
			}
		}
	}

	cout<<s<<endl;

   	return 0;
}