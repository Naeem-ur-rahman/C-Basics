#include <iostream>
using namespace std ;
int main ()
{
	int a =1,b,c=0;
	cout << "Enter a Number : ";
	cin >> b;
	do 
	{
		if (b%a==0 )
		{
			c++;
		}
		a++;
	}
	while (a<=b);
	if (c==2 )
	
	{
		cout << "Your Enter Number is Prime "<<endl;
	}
	else 
	{
		cout << "Your Enter Number is Not Prime"<<endl;
	}
	return 0;
}
