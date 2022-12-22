#include <iostream>
using namespace std;
int check_even (int a);
int check_odd (int a);
int main()
{
	int a;
cout << "Enter a Number :";
cin >> a;
check_even (a);
check_odd (a);
return 0;	
}



int check_even(int a)
{
	if (a%2==0)
	{
		cout <<a<<" : is Even"<<endl;
	}
	return 0;
}
int check_odd(int a)
{
	if (a%2==1)
	{
		cout << a << " : is Odd"<<endl;
	}
	return 0;
}
