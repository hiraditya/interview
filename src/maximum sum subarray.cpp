#include <iostream>
#include<climits>
using namespace std;

int maxsum(int a[],int n)
{
  int max_so_far = INT_MIN, max_ending_here = 0;
  for(int i=0;i<n;i++)
  {
    max_ending_here += a[i];
    if(max_so_far<max_ending_here)
      max_so_far = max_ending_here;
    if(max_ending_here<0)
      max_ending_here = 0;
  }
  return max_so_far;
}

int main() {
  int n,a[100];
  cout<<"Enter size: ";
  cin>>n;
  cout<<"Enter elements: \n";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<maxsum(a,n)<<endl;
	return 0;
}