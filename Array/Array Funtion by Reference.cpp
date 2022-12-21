#include<iostream>
#include <iomanip>
using namespace std;
void input(int[],int);
void print(const int[],int);
int main ()
{
	const int a = 7;
	int b[a];
	input (b,a);
	print (b,a);
	return 0;
}
void input (int a[],int b)
{
	for (int x=0;x<b;x++)
	{
		cout <<x+1 <<" Enter : ";cin>>a[x];
	}
	cout <<endl;
}
void print(const int b[],int a)
{
	for (int y=0;y<a;y++)
	{
		cout << b[y]<<"  ";
	}
	cout <<endl;
}
