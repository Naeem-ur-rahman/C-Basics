#include <iostream>
using namespace std;
int main ()
{
	for (int a =5;a >=1;a--)
	{
		for (int b =1;b<=a-a;b++)
		{
			cout << "   ";
		}
		int c = 1;
		while (c<=a)
		{
			cout << "*";
			c++;
		}
		cout << endl;
	}
	return 0;
}
