#include <iostream>
using namespace std;
void swap(int &a , int &b);
int main ()
{
int a , b;
cout << "Enter two values:"<<endl;
cin >> a >> b;
cout << "Enter values before swap:"<<endl;
cout << a << endl <<b	<< endl;
swap (a,b);
cout << "Value after swap:"<<endl;
cout << a << endl<< b<<endl;
return 0; 
}
void swap(int &a , int &b)
{
	int c;
	c = a;
	a = b;
	b = c ;
}
