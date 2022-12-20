#include <iostream>
using namespace std;
int main ()
{ ;
	for(int a=2;a<=50;a++)
	{
	int c = 0;
		for (int b=1;b<=a;b++)
		{
			if (a%b==0)
			{
				c++;
			}
		}
		if (c==2)
		{
			cout << a <<"Prime"<<endl;
		}
		else 
		{
			cout << a << "Not Prime"<<endl;
		}
	}
	return 0;
}
