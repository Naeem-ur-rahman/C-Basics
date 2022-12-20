#include <iostream>
using namespace std;
int main ()
{
	int a=1, b, c=0;
	cout << "Enter a Number : ";
	cin >> b;
	while (a<=b)
	{
		if (b%a ==0)
		{
			c++;
		}
		
		a++;
	}
	if (c==2)
	{
		cout << "Prime"<<endl;
	}
	else
	{
		cout << "Not Prime"<<endl;
	}
	return 0;
}
