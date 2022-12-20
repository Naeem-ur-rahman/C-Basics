#include <iostream>
using namespace std;
int main ()
{
	int d,f;
	cout << "Enter a Number :";cin >>f;
	for (int a=1;a<=f;a++)
	{
		for (int b=1;b<=f-a;b++)
		{
			cout << "#";
		}
		for (int c=1;c<=2*a-1;c++)
		{
		d=2*a-1;	
			if (c==1||c==d)
			{
				cout << "*";
			}
			else 
			{
				cout << "#";
			}
		
		}
			for (int e=1;e<=f-a;e++)
			{
				cout << "#";
			}
		cout <<endl;
	}
	system ("pause");
	return 0;
}
