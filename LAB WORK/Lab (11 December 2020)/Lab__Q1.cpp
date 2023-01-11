#include <iostream>
using namespace std;
int main ()
{
	int a[10],in,ix;
	int min=INT_MAX;
	int max=INT_MIN;
	for (int b=0;b<10;b++)
	{
		cout <<"Enter "<<b+1<<" value : ";cin>>a[b];cout<<endl;
		if (min>a[b])
		{
			min=a[b];
			in = b;
		}
		if (max<a[b])
		{
			max=a[b];
			ix=b;
		}
	}
	cout << "Maximum Value is : "<<max<<"  at index  "<<ix<<endl;
	cout << "Minimum Value is : "<<min<<"  at Index  "<<in<<endl;
	return 0;
}
