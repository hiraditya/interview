#include<iostream>
using namespace std;

bool isPrime(int n)
{
	if(n==0 || n==1)	return false;
	
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n = 15;

	if(isPrime(n))
	{
		cout<<n<<endl;
	}
	else if(isPrime(n-2))
	{
		cout<<"2 + "<<n-2<<endl;
	}
	else
	{
		cout<<"3 + ";
		n = n-3;

		for(int i=2;i<=n;i++)
		{
			if(isPrime(i) && isPrime(n-i))
			{
				//i + (n-i) = n
				cout<<i<<" + "<<n-i<<endl;
				break;	
			}
		}

	}

   	return 0;
}