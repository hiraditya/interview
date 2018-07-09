#include <iostream>
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

int main()
{
	int a[] = {1,2,3,4,5,6};
	int b[6];
	memCpy(b,a,sizeof(a));
	for(int i=0;i<6;i++)	cout<<b[i]<<" ";
	cout<<endl;
	return 0;
}