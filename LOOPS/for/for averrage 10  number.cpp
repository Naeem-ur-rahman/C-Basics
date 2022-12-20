#include <iostream>
using namespace std;
int main()
{
	float b,c=0;
	for (int a = 1 ; a<=10;a++)
	{
	cout << "Enter a Number : ";
	cin >> b;
	c += b ;
	}
	c = c/10;
	cout << "ANSWER : "<<c;
	return 0;
}
