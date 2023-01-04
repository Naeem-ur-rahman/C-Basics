#include <iostream>
using namespace std;
void saving ();
void current();
int balance = 1000;
int main ()
{
	long double  a ;
	char b;
	cout << "Enter your CNIC number : ";
	cin >> a;
	cout <<endl << endl<< "WELCOME : "<< a<< endl;
	cout << "Enter 'c' to use current account "<<endl;
	cout << "Enter 's' to use saving account "<<endl;
	cout << "Enter : ";
	cin >> b;
	if (b=='s')
	{
		saving ();
	}
	if (b=='c')
	{
		current();
	}
	return 0; 
}
void current()
{
	int a, b;
	char d;
	cout << "Enter debited amount : ";
	cin >> a;
   if (a<=balance)
{
		
	balance -= a;
	cout <<"Your remaining : "<< balance << endl;
}
else{
	cout << "Your balence is less "<<endl;
}
	cout << "Enter credited amount : ";
	cin >> b;
	balance += b;
	cout <<"Your remaining : "<< balance <<endl;
	cout << "Do you want to request for check book(y/n)?"<<endl;
	cout << "Enter : ";
	cin >> d;
	if (d=='y')
	{
		if (balance >=1000){
		
		balance -= 1000;
		cout << "Your Request accepted "<<endl;
		cout << "Your remaining : "<<balance<<endl;
	}
	else {
		cout << "Your balence is less "<<endl;
	}
	}
}
void saving()
{
	int a, b;
	char d;
	cout << "Enter debited amount : ";
	cin >> a;
   if (a<=balance)
{
		
	balance -= a;
	cout <<"Your remaining : "<< balance << endl;
}
else{
	cout << "Your balence is less "<<endl;
}
	cout << "Enter credited amount : ";
	cin >> b;
	balance += b;
	cout <<"Your remaining : "<< balance <<endl;
}
