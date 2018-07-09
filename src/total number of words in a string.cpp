#include <iostream>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	long n = s.length(), spaces=0;
	for(int i=0;i<n;i++)
	{
		if(s[i] == ' ')
		{
			spaces++;
			while(s[i+1] == ' ' && i<n-1)	//skip extra intermediate spaces
			{
				i++;
			}
		}

	}
	if(s[0] == ' ') spaces--;			//skip starting space
	if(s[n-1] == ' ') spaces--;			//skip ending space
	cout<<spaces+1<<endl;
	return 0;
}