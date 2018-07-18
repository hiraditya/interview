#include<bits/stdc++.h>
using namespace std;

void printEgyptian(int nr,int dr)
{

	if(nr==0 || dr==0)
		return;

	if(dr%nr==0)
	{
		cout<<"1/"<<dr/nr<<endl;
		return;
	}

	if(nr%dr==0)
	{
		cout<<nr/dr<<endl;
		return;
	}

	if(nr>dr)
	{
		cout<<nr/dr<<"+";
		printEgyptian(nr%dr,dr);
		return;
	}

	int gpu = dr/nr + 1;
	// nr/dr - 1/gpu
	cout<<"1/"<<gpu<<"+";
	printEgyptian(nr*gpu-dr,dr*gpu);
}

int main()
{
	int nr=6,dr=14;
	printEgyptian(nr,dr);	
   	return 0;
}