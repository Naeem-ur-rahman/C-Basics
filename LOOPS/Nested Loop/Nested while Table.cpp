#include <iostream>
using namespace std;
int main ()
{
	int a =2;
	while (a<=5)
	{
		int b=1;
		while (b<=10)
		{
			cout << a << " *  "<< b << " =  "<< a * b <<endl;
			b++;
		}
		a++;
		cout << '\n';
	}
	return 0;
}
