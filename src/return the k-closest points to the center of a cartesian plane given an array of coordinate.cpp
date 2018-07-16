#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;

class Point
{
public:
	int x,y;
	Point(int x,int y)
	{
		this->x = x;
		this->y = y;
	}
	double dist() const
	{
		return sqrt(x*x + y*y);
	}
};

class compare
{
	public:
		bool operator () (Point &p1,Point &p2)
		{
			return p1.dist() < p2.dist();
		}
};

int main()
{
	priority_queue<Point, vector<Point> ,compare>	heap;

	int n = 5 ,k = 3 ,x[] = {0,1,2,3,2}, y[] = {1,0,1,1,2};

	for(int i=0;i<n;i++)
	{
		Point p(x[i],y[i]);
		if(heap.size()<k)
		{
			heap.push(p);
		}
		else
		{
			if(heap.top().dist() > p.dist())
			{
				heap.pop();
				heap.push(p);
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		if(Point(x[i],y[i]).dist() <= heap.top().dist())
		{
			cout<<x[i]<<" "<<y[i]<<endl;
			k--;
		}
		if(k==0)	break;
	}

    return 0;	
}
