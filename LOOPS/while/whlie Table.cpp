#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int a =1,b;
	cout << "Enter a Number :";
	cin >> b;
	while (a<=100)
	{
		cout << b <<" * "<<setw(3)<< a << " = "<<setw(3)<< a *b<<endl;
		a++;
	}
	return 0;
	
}
