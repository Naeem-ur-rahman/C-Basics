#include <iostream>
using namespace std;
void comb(int a , int b);
int main ()
{
	int a , b;
	cout << "Enter the chairs : ";
	cin >> a;
	cout << "Enter the guests : ";
	cin >> b;
	comb (a,b);
	return 0;
}
void comb(int a,int b)
{
	int d=1;
	for (int c=1;c<=a;c++)
	{
		
		d = d*b;
		b--;
	}
	cout << "Combinations are : "<< d<<endl;
	
}
