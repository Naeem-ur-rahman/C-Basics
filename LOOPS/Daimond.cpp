#include <iostream>
using namespace std;
int main ()
{
	int g;
	cout <<"Enter a Number : ";cin>>g;
	for (int a=1;a<=g;a++)
	{
		for(int b=1;b<=g-a;b++)
		{
			cout <<" ";
		}
		for (int c=1;c<=2*a-1;c++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
	for (int d=g-1;d>=1;d--)
	{
		for (int e=1;e<=g-d;e++)
		{
			cout <<" ";
		}
		for (int f=1;f<=2*d-1;f++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
	return 0;
}
