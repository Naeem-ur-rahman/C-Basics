#include <iostream>
using namespace std;
int main ()
{
	for(int a=1;a<=6;a++)
	{
		for (int b=1;b<=7;b++)
		{
			if (a==1||a==6 || b==1||b==7 || b==4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
