#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome ! "<<endl;
	void copystring(char*,char*);
	char* str1 ="Self-conquest is the Greatest Victory .";
	char str2[80];
	cout << "String 1 Before Copy is : "<<str1<<endl;
	cout << "String 2 Before Copy is : "<<str2<<endl;
	copystring(str2,str1);
	cout <<"String 1 After Copy is : "<<str1<<endl;
	cout <<"String 2 After Copy is : " <<str2<<endl;
	return 0;
}
void copystring(char *dest,char* src)
{
	while( *src )
	*dest++ = *src++;
    *dest='\0';	
}
