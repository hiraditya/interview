#include <iostream>
using namespace std;

string int_to_string(int num)
{
	string res="";

	int sign = (num<0)?-1:1;

	num = abs(num);

	while(num>0)
	{
		res += char(num%10 + 48);  //123  res = 3 2 1
		num /= 10; //num = num/10
	}

	if(sign<0)	res+='-';

	for(int i=0;i<res.length()/2;i++)
	{
		swap(res[i],res[res.length()-i-1]);
	}

	return res;
}

int main()
{
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	cout<<int_to_string(n)<<endl;
	return 0;
}