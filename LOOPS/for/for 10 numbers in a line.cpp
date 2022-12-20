#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	for(int a = 1;a<=100;a++)
	{
		cout <<setw(2)<< a <<"   " ;
		if ( a%10==0 )
		{
			cout << '\n';
		}

	}
	return 0;
}
