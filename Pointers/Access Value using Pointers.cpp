#include <iostream>
using namespace std;
int main (){
	float v=123.9;
	float * pointer;
	pointer=&v;
	cout << "Address  using &  : "<<&v<<endl;
	cout << "Address  *pointer : "<<pointer<<endl;
	cout << "Value is : "<<*pointer<<endl;
	return 0;
}
