#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={2,3,4,5,3},b[]={1,2,3,4,5},na=5,nb=5;

	int aor=0,bor=0;

	for(int i=0;i<na;i++)	aor |= a[i];
	for(int i=0;i<nb;i++)	bor |= b[i];

	cout<<aor+bor<<endl;

   	return 0;
}