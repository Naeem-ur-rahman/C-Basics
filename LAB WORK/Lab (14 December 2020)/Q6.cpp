#include <iostream>
#include <math.h>
double area (float);
using namespace std;
int main()
{
	cout << 5000%6<<endl;	float r;
	cout << "Enter the radius  : ";cin>>r;
	cout << "Area of Circle is : "<< area(r)<<endl;
	return 0;
}
double area (float c)
{
	double a;
	a = pow(c,2)*3.1416;
	return a;
}
