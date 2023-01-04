#include <iostream>
using namespace std;
int main ()
{
	cout << "WELCOME to COMSATS Universty SAHIWAL"<<endl;
	float a , b , c ,a1 ,b1 ,c1 ,a2 ,b2 ,c2 , naeem ;
	cout <<"Enter MATRIC obtained marks "<<endl;
	cin >>a;
	cout <<"Enter MARTIC TOTAL marks"<<endl;
	cin >> a1;
	cout <<"Enter FSC obtained marks"<<endl;
	cin>> b;
	cout<<"Enter FSC TOTAL marks "<<endl;
	cin >>b1;
	cout <<"Enter NTS obtained marks "<<endl;
	cin >>c;
	cout <<"Enter NTS TOTAL marks"<<endl;
	cin >>c1;
	a2 = (a/a1*100);
	b2 = (b/b1*100);
	c2 = (c/c1*100);
	naeem = a2 * 0.1 + b2 * 0.4 + c2 * 0.5 ;
	cout <<"YOUR AGGREGATE IS \n" << naeem;
	return 0;
}
