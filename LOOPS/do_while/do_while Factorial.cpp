#include <iostream>
using namespace std;
int main ()
{
	int a=1,b ,c=1 ;
	cout << "Enter a Number : ";
	cin >> b;
	do 
	{
		c *= a;
		a++;
	}
	while (a <= b );
	cout << "FACTORIAL : "<<c;
	return 0;
}
