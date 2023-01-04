#include <iostream>
using namespace std;
int main (){
	int var1 = 22;
	int var2 = 10;
	int *p1,*p2;
	p1 = &var1;
	cout << "POINTER Address of var1 is : "<<p1<<endl;
	p2 =&var2;
	cout << "POINTER Address of var2 is : "<<p2<<endl;
	cout << (*p1)*(*p2)<<endl;
	return 0;
}
