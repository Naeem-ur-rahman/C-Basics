#include <iostream>
using namespace std;
void add()
{
	int a ,b,c;
	cout << "Enter the value of a :";
	cin >> a;
	cout << "Enter the value of b :";
	cin >> b;
	c = a+b;
	cout <<"Addittion : "<< c;
}
	void sub()
{
	int a ,b,c;
	cout << "Enter the value of a :";
	cin >> a;
	cout << "Enter the value of b :";
	cin >> b;
	c = a - b;
	cout << "Subtraction : "<< c<<endl;	
}

void mul()
{
	int a ,b,c;
	cout << "Enter the value of a :";
	cin >> a;
	cout << "Enter the value of b :";
	cin >> b;
	c = a * b;
	cout << "Multiply : "<< c<<endl;	
}

void div()
{
	float a ,b,c;
	cout << "Enter the value of a :";
	cin >> a;
	cout << "Enter the value of b :";
	cin >> b;
	c = a / b;
	cout << "Divition : "<< c<<endl;	
}


void mod()
{
	int a ,b,c;
	cout << "Enter the value of a :";
	cin >> a;
	cout << "Enter the value of b :";
	cin >> b;
	c = a % b;
	cout << "Modulus : "<< c<<endl;	
}


int main ()
{
	int s;
	char b;
	cout << "Enter 1 to ADDITION"<<endl;
	cout << "Enter 2 to SUBTRACTION"<<endl;
	cout << "Enter 3 to MULTYPLY"<<endl;
	cout << "Enter 4 to DIVISION"<<endl;
	cout << "Enter 5 to MODULUS"<<endl;
	cout << "Enter :";
	cin >>s;
	cout << endl;
	if (s==1)
	{
	do
	{
	add();
	cout << "Enter 'Y' to use again"<<endl;
	cout << "Enter 'N' to close it"<<endl;
	cout <<"Enter : ";
	cin >> b;
}
while ( b == 'y');	

	}
		else if (s==2)
	{
	do
	{
	sub();
	cout << "Enter 'Y' to use again"<<endl;
	cout << "Enter 'N' to close it"<<endl;
	cout <<"Enter : ";
	cin >> b;
}
while ( b == 'y');	

	}
	else	if (s==3)
	{
	do
	{
	mul();
	cout << "Enter 'Y' to use again"<<endl;
	cout << "Enter 'N' to close it"<<endl;
	cout <<"Enter : ";
	cin >> b;
}
while ( b == 'y');	

	}
	
		else if (s==4)
	{
	do
	{
	div();
	cout << "Enter 'Y' to use again"<<endl;
	cout << "Enter 'N' to close it"<<endl;
	cout <<"Enter : ";
	cin >> b;
}
while ( b == 'y');	

	}
		else if (s==5)
	{
	do
	{
	mod();
	cout << "Enter 'Y' to use again"<<endl;
	cout << "Enter 'N' to close it"<<endl;
	cout <<"Enter : ";
	cin >> b;
}
while ( b == 'y');	

	}
	else
	{
		cout << "INVALID INPUT "<<endl;
	}
	
	return 0;
}
