#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	
    int a[5]={21,32,124,356,3};
	int* pnt;
	pnt = a;
	for (int a=0;a<5;a++)
	{
		cout << "Value of Array : "<<setw(4) <<*(pnt+a)<<" at Address : "<< pnt+a <<endl;
	}
	return 0;
}
