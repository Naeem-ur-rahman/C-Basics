#include <iostream>
using namespace std;
int main ()
{
	int a ;
	for (a = 0; a<=100;a++ )
	{
		if (a%2==0)
		{
			cout << a <<'\t'<< "Even Number "<< endl;
		}
		else
		{
			cout << a << '\t'<< "Odd Number "<<endl;
		}
	}
	return 0;
}
