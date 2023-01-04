#include <iostream>
using namespace std;
int main (){
	int a=12;
	float b=31.12;
	char c[22]={"Naeem ur Rahman Sajid"};
	void *pnt;
	pnt=&a;
	cout <<"Addres a : "<<pnt<<endl;
	pnt=&b;
	cout <<"Addres b : "<<pnt<<endl;
	pnt=&c;
	cout <<"Addres c : "<<pnt<<endl;
	return 0;
}
