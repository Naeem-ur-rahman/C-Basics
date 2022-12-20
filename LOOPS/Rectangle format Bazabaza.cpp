#include <iostream>
using namespace std;
int main()
{
	int x;
	cout <<"Enter : ";cin>>x;
	cout <<endl;
	for (int a=1;a<=x;a++)
	{
		
		for (int b=1;b<=x;b++)
		{
		       if (a==1||a==x||b==x||b==1||a==b||b==x-a||b==(x/2)||a==(x/2))
		       {
		       	cout << "*";
			   }
			   else
			   {
			   	cout << " ";
			   }
		}
		cout <<endl;
	}
	
	return 0;
}
