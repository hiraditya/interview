#include <iostream>
using namespace std;

double f(int x1,int y1,int x2,int y2,int x,int y)
{
	return (x2-x1)*(y-y1) - (y2-y1)*(x-x1);
}
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cout<<"Enter x1, y1, x2, y2, x3, y3, x4, y4 \n";
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	
	if((f(x1,y1,x2,y2,x3,y3)*f(x1,y1,x2,y2,x4,y4))<=0 && (f(x3,y3,x4,y4,x1,y1)*f(x3,y3,x4,y4,x2,y2))<=0)
	{
		cout<<"yes\n";
	}
	else
	{
		cout<<"no\n";
	}
	return 0;
}