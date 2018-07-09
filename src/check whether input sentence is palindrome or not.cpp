#include <iostream>
using namespace std;

bool is_palindrome(string s)
{
	//removing unwanted characters
	string new_string="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			new_string += s[i];
		}
		if(s[i]>='A' && s[i]<='Z')
		{
			new_string += s[i];
		}
	}

	//checking for palindrome
	int n = new_string.length();
	for(int i=0;i<=(n/2);i++)
	{
		if(new_string[i] != new_string[n-i-1])
			return false;
	}
	return true;
}

int main()
{
	string s;
	cout<<"Enter a sentence\n";
	getline(cin,s);
	if(is_palindrome(s))	cout<<"Palindrome\n";
	else	cout<<"Not a palindrome\n";
	return 0;
}