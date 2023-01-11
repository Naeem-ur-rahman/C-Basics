#include <iostream>
using namespace std;
int main ()
{
	for (int a=1;a<=5;a++)
	{
		for (int b=1;b<=5;b++)
		{
			if (b==1||b==5 || a==1||a==5)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << '\n';
	}
	return 0;
}
