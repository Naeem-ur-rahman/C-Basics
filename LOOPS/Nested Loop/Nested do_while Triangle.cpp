#include <iostream>
using namespace std;
int main()
{
	int a =1,c;
	cout << "Enter a number : ";
	cin >> c;
	
	do 
	{
		int b = 1;
		do
		{
			cout << b;
			b++;
		}while (b<=a);
		a++;
		cout << '\n';
	}while (a<=c);
	return 0;
}
