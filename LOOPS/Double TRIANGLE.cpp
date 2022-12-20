#include <iostream>
using namespace std;
int main ()
{
	int e;
	cout <<"Enter a Number : ";cin>>e;
	for(int a=1;a<=e;a++)
	{
		for (int b=1;b<=a;b++)
		{
			cout << "+";
		}
		for (int c=e;c>a;c--)
		{
			cout <<" ";
		}
		for (int d=1;d<=a;d++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
	return 0;
}
