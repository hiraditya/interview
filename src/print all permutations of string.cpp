#include <iostream>
using namespace std;

void permutate(string s,int l,int r)
{
	if(l==r)
	{
		cout<<s<<" ";
		return;
	}
	for(int i=l;i<=r;i++)
	{
		swap(s[l],s[i]);
		permutate(s,l+1,r);	//recursive call
		swap(s[l],s[i]);	//Backtracking
	}
}

int main()
{
	string s = "ABC";
	permutate(s,0,s.length()-1);
	cout<<endl;
    return 0;	
}
