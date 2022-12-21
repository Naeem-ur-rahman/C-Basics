#include <iostream>
using namespace std;
int main ()
{
	float a [10], c = 0;
	for (int b=0;b<=9;b++)
	{
		cin >> a[b];
		c = c + a[b];
	}
	cout <<"Average : "<< c/10<<endl;
	return 0;
}
