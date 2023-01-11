#include <iostream>
using namespace std;
int main ()
{
	int m;
	cout <<"Enter 5 Cities of Pakistan  "<<endl;
	char string[100]={'\0'};
	
	cin.get(string,100);
	cout <<endl;
	cout <<"You Entered "<<endl;
	for(int i=0;i<100;i++)
	{
		cout << string[i];
		if (string[i]==' ')
	{
		cout <<endl;
	}
	}

	return 0;
	
}
