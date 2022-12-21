#include <iostream>
using namespace std;
int main ()
{
	int a[10]={2,10,24,53,23,64,23,12,35,13};
	int t=a[0];
	cout << "Orignal Order of the data !"<<endl;
	for (int b=0;b<10;b++)
{
	cout << a[b]<<"  ";
}
cout << endl;
for (int d=0;d<10;d++)
for (int c=0;c<10;c++)
{
	if (a[c]>a[c+1])
	{
		t = a[c];
		a[c] = a[c+1];
		a[c+1]=t;
	}
}
cout << "Data Ater arranging in order !"<<endl;
for (int d=0;d<10;d++)
{
	cout << a[d]<<"  ";
}
	return 0;
}
