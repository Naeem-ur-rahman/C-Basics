#include <iostream>
using namespace std;
#include <conio.h>
int main ()
{
	char a;
	int b=1,c=0;
	while ((a=getche())!='\r')
	{
		if (a ==' ')
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	cout << endl;
	cout << "No of Words are : "<<b<<endl;
	cout << "No of Letters are : "<<c<<endl;
	return 0;
}
