#include <iostream>
using namespace std;
int main ()
{
	int d,e;
	cout <<"Enter a Number : ";cin>>e;
	for (int a=1;a<=e;a++)
	{
		for (int b=1;b<=e-a;b++)
		{
			cout <<" ";
		}
		for (int c=1;c<=2*a-1;c++)
		{
			d=2*a-1;
			if (a==1||a==e||c==1||c==d)
			{
				cout <<"+";
			}
			else
			{
				cout <<" ";
			}
		}
		cout <<endl;
	}
	return 0;
}
