#include <iostream>
using namespace std;
int main ()
{
	int x;
	cout << "Enter a Number : ";cin>>x;
	for (int a=1;a<=x;a++)
	{
		
		for (int b=1;b<=a;b++)
		{
			cout << "*";
		}
		cout <<endl;
	}
	for (int c=x;c>=1;c--)
	{
		for (int d=1;d<=x+1-c;d++)
		{
			cout << " ";
		}
		for (int e=1;e<=c-1;e++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
