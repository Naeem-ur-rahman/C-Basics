#include <iostream>
using namespace std;
int main ()
{
	int g,h,i;
	cout << "Enter a Number : ";cin>>g;
	for (int a=1;a<=g;a++)
	{
		for (int b=1;b<=g-a;b++)
		{
			cout <<" ";
		}
		for (int c=1;c<=2*a-1;c++)
		{
			h=2*a-1;
			if (a==1 || c==1 || c==h )  {
			cout <<"*";}
			else {
				cout <<" ";
			}
		}
		cout <<endl;
	}
	for (int d=g-1;d>=1;d--)
	{
		for (int f=1;f<=g-d;f++)
		{
			cout <<" ";
		}
		for (int e=1;e<=2*d-1;e++)
		{
			i=2*d-1;
			if (d==1 ||e==1 ||e==i ){
			cout <<"*";
		}
		else {
			cout <<" ";
		}
		}
		cout <<endl;
	}
	return 0;
}
