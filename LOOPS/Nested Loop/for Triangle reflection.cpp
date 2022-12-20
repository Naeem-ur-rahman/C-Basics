#include <iostream>
using namespace std;
int main ()
{
	int d;
	cout << "Enter a Number : ";cin>>d;
	cout <<endl;
	for (int a=1 ;a<=d;a++)
	{
		for (int b =1;b<=d-a;b++)
		{
			cout <<" ";
		}
		for (int c =1;c <=a;c++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
