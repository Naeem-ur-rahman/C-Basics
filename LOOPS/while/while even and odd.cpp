#include <iostream>
using namespace std;
int main ()
{
	int a=1 ;
	while (a<=100)
	{
		if (a%2==0)
		{
			cout << a << '\t'<< " Even "<<endl;
		}
		else 
		{
			cout << a << '\t'<< " Odd "<<endl;
		}
		a++;
	}
	return 0;
}
