#include <iostream>
#include <cstring>
using namespace std;

void memCpy(void *dest,void *src,size_t n)
{
	char* cdest = (char*)dest;
	char* csrc = (char*)src;
	
	for(int i=0;i<n;i++)
	{
		cdest[i] = csrc[i];
	}
}

void memMove(void *dest, void *src, size_t n)
{
	char* cdest = (char*)dest;
	char* csrc = (char*)src;
	char *temp = new char[n];

	for(int i=0;i<n;i++)
	{
		temp[i] = csrc[i];
	}

	for(int i=0;i<n;i++)
	{
		cdest[i] = temp[i];
	}

}

int main()
{
	char c[] ="Hindisiksha";
	memMove(c+5,c,sizeof(c));
	cout<<c<<endl;
	return 0;
}