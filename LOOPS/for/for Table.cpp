#include <iostream>
using namespace std;
int main ()
{   
     int a , b , c , d;
     cout << "Enter the number "<<endl;
     cin >> b;
     cout << "Enter the starting value "<<endl;
     cin >> c ;
     cout << "Enter the closing value "<<endl;
     cin >> d;
	for (a = c  ; a <=d  ; a++ )
	{
		cout << b<<'\t' <<" * "<< a <<'\t'<< " = "<< a * b <<endl;
	}
return 0 ;
}
