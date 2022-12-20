#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b;
	for (a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			cout << setw(7) << "*";
		}
		
		cout << "\t";cout << endl;
	}
	return 0;
}
