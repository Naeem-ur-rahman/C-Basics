#include <iostream>
using namespace std;
int main()
{
	int g,h,i;
	cout << "Enter a Number : ";cin>>i;
	for (int a=i;a>=1;a--)
	{
		for (int b=1;b<=i-a;b++)
		{
			if (b!=1){
			cout << " ";
		}
		else
		{
			cout << "*";
		}
		}
		g=2*a-1;
		for (int c=1;c<=2*a-1;c++)
		{
			if (a==i||c==g||c==1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
			for (int j=1;j<=i-a;j++)
		{
			if (j==(i-a))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for (int d=2;d<=i;d++)
	{
		
		for (int e=1;e<=i-d;e++)
		{
			if(e!=1){
			cout <<" ";}
			else
			{
				cout << "*";
			}
		}
		h=2*d-1;
		for (int f=1;f<=2*d-1;f++)
		{
				if (d==i||f==h||f==1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		for (int k=1;k<=i-d;k++)
		{
			if (k==(i-d))
			{
				cout << "*";
			}
			else 
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
