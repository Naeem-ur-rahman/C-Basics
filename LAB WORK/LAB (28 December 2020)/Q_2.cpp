#include<iostream>
using namespace std;
int main (){
	
	int a[4];
	int *p[4];
	for (int i=0;i<4;i++){
		cout << "Enter Values : ";cin>>a[i];
		p[i]=&a[i];
	}
	cout << "Multiple array element using pointers : ";
	cout << (*p[0])*(*p[1])*(*p[2])*(*p[3])<<endl;
	cout << "Add the array elements using Pointers : ";
	cout << (*p[0])+(*p[1])+(*p[2])+(*p[3])<<endl;
	return 0;
}
