#include <iostream>
using namespace std;
void add(float a , float b);
void sub(float a , float b);
void mul(float a , float b);
void div(float a , float b);
void mod(int a , int b);
int main()
{
	float a,b;
	cout << "Enter Number 'a' :";
	cin >> a;
	cout << "Enter Number 'a' :";
	cin >> b;
	cout << "Enter 1 to Add"<<endl;
	cout << "Enter 2 to Sub"<<endl;
	cout << "Enter 3 to Mul"<<endl;
	cout << "Enter 4 to Div"<<endl;
	cout << "Enter 5 to Mod"<<endl;
	int c;
	cout << "Enter :";
	cin >> c ;
	switch (c)
	{
		case 1 :
			{
				add(a,b);break;
			}
		case 2 :
			{
				sub(a,b);break;
			}
		case 3 :
			{
				mul(a,b);break;
			}
		case 4 :
			{
				div(a,b);break;
			}
		case 5 :
			{
				mod(a,b);break;
			}
		default :
	{
		cout << "Invalid input "<< endl;
	}
    }
	return 0;
}

void add(float a , float b)
{
	cout <<"ADDITION : " << a + b<<endl;
}
void sub(float a , float b)
{
	cout <<"SUBTRACTION : " << a - b<<endl;
}
void mul(float a , float b)
{
	cout <<"MULTIPLICATION : " << a * b<<endl;
}
void div(float a , float b)
{
	cout <<"DIVITION : " << a / b<<endl;
}
void mod(int a , int b)
{
	cout <<"MODULUS : " << a % b<<endl;
}
