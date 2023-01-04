#include <iostream>
using namespace std;
int main ()
{
	void str(char *);
	char string[]={"Idle people have the least leisure"};
	str(string);
	return 0;
}
void str(char* str1)
{
	cout << "String = "<<str1<<endl;
}
