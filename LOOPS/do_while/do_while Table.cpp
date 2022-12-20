#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int a = 1, b ;
	cout << "Enter a Number : ";
	cin >> b;
	do
	{
		cout << b << " * "<<setw(2)<< a <<" = "<<setw(3)<<a *b<<endl;
		a++;
	}
	while (a <=10);
	return 0;
}
