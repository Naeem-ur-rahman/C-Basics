#include <iostream>
using namespace std;
int main ()
{
	float a[10],c;
	for (int b=0;b<10;b++)
	{
		cout << "Enter "<<b+1<< " input : ";
		cin >> a[b];
		c += a[b];
	}
	cout << "SUM IS  : "<< c<<endl;
	cout << "Average : "<< c/10<<endl;
	return 0;
}
