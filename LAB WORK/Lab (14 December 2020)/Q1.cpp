#include <iostream>
using namespace std;
int main ()
{
	int A[10],max=INT_MIN,min=INT_MAX,ix=0,in=0;
	for (int a=0;a<10;a++)
	{
		cout << "Enter : ";cin>>A[a];cout<<endl;
	}
	for (int a=0;a<10;a++)
	{
		if (max<A[a])
		{
			max=A[a];
			ix=a;
		}
		if (min>A[a])
		{
			min=A[a];
			in=a;
		}
	}
	cout <<"Maximum Value is : "<<max <<"  at  index  "<< ix<<endl;
	cout <<"Minimum Value is : "<<min <<"  at  index  "<< in<<endl;
	return 0;
}
