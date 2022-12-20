#include <iostream>
using namespace std;
 
int main()
{
	unsigned long  int  number;
	cout << "Enter a number to separate it's digits: ";
	cin >> number;
 
	while (number != 0)
	{
		cout << number%10 << " ";
		number /= 10; cout<<endl;
	}
 
	cout << endl;
 
	system("pause");
	return 0;
}
