#include <iostream>
using namespace std;
int main ()
{
	int a =1 ;
	float b , c = 0;
	do 
	{
		cout << "Enter a Number : ";;
		cin >> b;
		c += b;
		a++;
	}while (a <= 10);
	c = c / 10;
	cout << "ANSWER : "<< c;
	return 0;
}
