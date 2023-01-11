#include <iostream>
using namespace std;
float triangle(float*,float*);
int main(){
	
	float height,base;
	cout << "Enter Height : ";cin>>height;
	cout << "Enter Base   : ";cin>>base;   
	cout << "Area of triangle is : "<< triangle(&height,&base)<<endl;

	return 0;
}
float triangle (float*h,float*b){
	
	float ans;
	ans = 0.5*(*h)*(*b);
	return ans;
	
}
