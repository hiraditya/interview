#include <iostream>
using namespace std;

long divide(long dividend,long divisor)
{
  int sign;
  if((dividend<0) ^ (divisor<0))
  {
    sign = -1;
  }
  else
  {
    sign = 1;
  }

  divisor = abs(divisor);
  dividend = abs(dividend);

  int temp = 0, quotient = 0;
  for(int i=31;i>=0;i--)
  {
    if((temp + (divisor<<i)) <= dividend)
    {
      temp += (divisor<<i);
      quotient = quotient | (1<<i); //1*2^i 
    }
  }
  return quotient*sign;
}


int main() {
  cout<<divide(25,5);
	return 0;
}