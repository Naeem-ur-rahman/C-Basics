#include <iostream>
using namespace std;
int main ()
{
	const int m=60;
	cout <<"Enter : ";
	char string [m];
	cin.get(string,m);
	cout <<endl;
	cout << "You Entered : ";
	cout <<  string;
	return 0;
}
