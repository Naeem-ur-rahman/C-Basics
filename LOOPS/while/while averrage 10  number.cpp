#include <iostream>
using namespace std;
int main ()
{
	int a =1; 
	float b , c=0 ;
	while (a<=10)
	{
		cout << "Enter a Number : ";
		cin >>b;
		c += b;
		a++;
	}
	c = c / 10;
	cout << "ANSWER : "<<c;
	return 0;
}
