#include <iostream>
using namespace std;
float area(float*,float*);
float area(float*,const float*);
int main ()
{
	float a,b,c;
	const float pi =3.1416;
	cout << "Enter Height : ";cin>>a;
	cout << "Enter Base   : ";cin>>b;
	cout << "Enter Radius : ";cin>>c;
	cout << "Area of Triangle : "<<area(&a,&b)<<endl;
	cout << "Area of Circle   : "<<area(&c,&pi)<<endl;
	return 0;
}
float area (float*h,float*b){
	
  float ans= 0.5*(*h)*(*b);
  return ans;
	
} 
float area (float*r,const float*p){
	
  float ans= (*p)*(*r)*(*r);
  return ans;
	
} 
