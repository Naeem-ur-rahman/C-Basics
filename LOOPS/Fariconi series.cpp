#include <iostream>
using namespace std;
int main ()
{
	const unsigned long c = 4294967295;
	unsigned long b=1,a=0;
	while (b<c/2)
	{
		cout << b <<endl;
		unsigned long sum = a+b;
		
		a=b;b=sum;
	}
	
	return 0;
}
