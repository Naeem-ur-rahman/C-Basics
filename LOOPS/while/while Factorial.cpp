#include <iostream>
using namespace std;
int main ()
{
	int a=1 , b, c=1;
	cout<< "Enter a Number :";
	cin >> b;
	
	while (a<=b)
	{
		c *= a;
		a++;
	}
	cout << "Factorial is : "<< c<<endl;
	return 0;
}
