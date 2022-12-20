#include <iostream>
using namespace std;
int main()
{
	int a , b , c ;
	cout << "Enter a number : ";
    cin >> b ;
	for ( a = 1 ; a <= b ; a++ )
	{
		c = c * a;
		cout << c <<endl;
	}
	cout << c ;
	return 0;
}
