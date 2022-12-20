#include <iostream>
using namespace std;
int main ()
{
	int a = 0 ;
	do 
	{
		cout << a;
		if (a % 2==0)
		{
			cout <<'\t'<< "Even"<<endl;
		}
		else
		{
			cout << '\t'<<"Odd"<<endl;
		}
		a ++;
	}	while (a<=100);
	
	return 0;
}
