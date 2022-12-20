#include <iostream>
using namespace std;
int main ()
{
	unsigned long int a,n;
	cout << "Enter the Value : ";
	cin>>n;
	while (n>0)
	{
		a = a + (n%10);
		a = a*10;
		n /= 10;
	}
	a/=10;
	cout << a;
	return 0;
	
}
