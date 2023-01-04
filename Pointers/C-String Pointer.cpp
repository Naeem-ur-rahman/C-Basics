#include <iostream>
using namespace std;
int main()
{
	char str[]={"Defined is a String"};
	char* str1={"Defined is Pointer"};
	cout << "String  = "<<str<<endl;
	cout<<  "Pointer = "<<*str1++;
	cout<<endl;
	cout<< "Pointer = "<<*str1<<endl;
	return 0;
}
