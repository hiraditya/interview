#include <iostream>
using namespace std;

int main()
{
	string str = "Welcome to hindisiksha";
	size_t i = str.find("tutorial");
	cout<<i<<" "<<string::npos<<endl;
	return 0;
}