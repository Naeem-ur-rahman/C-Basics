#include <iostream>
using namespace std;

int main()
{
	int d;
	cout <<"Enter number of Lines :";
	cin >> d;
	for(int a=1;a<=d;a++)
	{
		for (int b=1;b<=d-a;b++)
		{
			cout << " ";
		}
		for (int c=0;c!=2*a-1;c++)
		{
			cout << "*";
		}
	cout << endl;	
	}
	return 0;
}
