#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int a=1 ;
	do
	{
		cout<<setw(3) << a <<"  ";
		if (a % 10==0 )
		
		{
			cout << '\n';
		}
		a ++;
	}
	while (a <=100);
	return 0;
}
