#include <iostream>
using namespace std;
int main ()
{
	float a[10],c=0;
	for (int b=0;b<10;b++)
	{
		cout << "Enter "<<b+1<<" Value : ";cin>>a[b];cout << endl;
		c+=a[b];
	}
	cout << "Sum : "<<c<<endl;
	cout << "AVERAGE  : "<<c/10<<endl;
	return 0;
}
