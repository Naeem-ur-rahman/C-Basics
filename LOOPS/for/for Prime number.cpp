#include <iostream>
using namespace std;
int main ()
{
	int a , b , c=0;
	cout << "Enter the NUmber"<<endl;
	cin >> b;
	for (a = 1;a<=b ;a++)
	{
		if (b%a == 0)
		{
			c++;
		}
	}
	if (c==2)
	{
		cout << "Entered Number is PRIME"<<endl;
		
	}
	else 
	{
		cout <<"NOT a PRIME Number"<<endl;
	}
	return 0;
}
