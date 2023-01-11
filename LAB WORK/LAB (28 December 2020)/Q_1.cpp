#include<iostream>
using namespace std;
int main (){
	int a=1123;
	float b=21.123;
	char c='A';
	void *pointer;
	pointer =&a;
	cout << "Adreess of int data type vaariable using void pointer : "<<pointer<<endl;
		pointer =&b;
	cout << "Adreess of float datatype vaariable using void pointer : "<<pointer<<endl;
		pointer =&c;
	cout << "Adreess of char datatype vaariable using void pointer : "<<pointer<<endl;
	
	return 0;
}
