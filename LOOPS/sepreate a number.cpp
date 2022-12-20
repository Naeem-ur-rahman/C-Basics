#include <iostream>
using namespace std;
int main ()
{
	unsigned long int a,n;
	cout << "Enter a Number : ";
	cin >> a;
	while (a>0)
	{
		n +=(a%10);
		n *=10;
		a/=10;
	}
	n/=10;
	while (n!=0)
	{
		cout << n%10<<"   ";
		n/=10;
	}
	return 0;
}
