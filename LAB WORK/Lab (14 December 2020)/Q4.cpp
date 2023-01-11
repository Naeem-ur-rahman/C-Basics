#include <iostream>
using namespace  std;
int main ()
{
	const int m=3,d=4;
	double s[d][m];
	for (int a=0;a<d;a++)
	{
		cout << "District :: "<<a+1<<endl;
		for (int b=0 ;b<m;b++)
		{
			cout << b+1  << " Month : ";cin>>s[a][b];
		}
	}
	cout <<"\t\t" <<"Month"<<endl;
	cout << "\t\t  1\t2\t3"<<endl;
		for (int a=0;a<d;a++)
	{
		cout << "District "<<a+1<<'\t';
		for (int b=0 ;b<m;b++)
		{
			cout << s[a][b]<<"\t";
		}
		cout <<endl;
	}
	return 0;
}
