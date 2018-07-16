#include <iostream>
using namespace std;

int main()
{
	int n = 2, m = 7;
	string slots[] = {"1010101","0101010"};

	int busy[7] = {0};

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(slots[i][j]=='1')
			{
				busy[j]++;
			}
		}
	}

	int rooms = 0;

	for(int i=0;i<m;i++)
	{
		if(busy[i] > rooms)	rooms = busy[i];
	}

	cout<<"Rooms needed: "<<rooms<<endl;

    return 0;	
}
