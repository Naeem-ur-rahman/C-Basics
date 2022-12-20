#include <iostream>
using namespace std;
int main ()
{
	int a = 2;
	do 
	{
		int b =1;
		do
		{
			cout <<a <<" * "<< b<<" = "<< a * b <<endl; 
		b++;
		}while (b<=10);
		a++;
		cout << '\n';
	}while(a<=5);
	return 0;
}
