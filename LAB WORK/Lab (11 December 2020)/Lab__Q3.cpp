#include <iostream>
using namespace std;
int main ()
{
	int A[5],b,c;
	for (int a=0;a<5;a++)
	{
		cout << "Enter "<<a+1 << " Value : ";cin>>A[a];
	}
	cout <<endl;
	cout << "Enter a Value : ";cin>>b;
	cout <<endl;
	for (int a=0;a<5;a++)
	{
		if (b==A[a])
		{
			cout << "Value is at : "<< a <<endl;
			c++;
		}
	}
	if (c==0)
	{
		cout << "Value is not available ! "<<endl;
	}
	return 0;
}
