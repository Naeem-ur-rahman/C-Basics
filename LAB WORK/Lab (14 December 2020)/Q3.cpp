#include <iostream>
using namespace std;
float sum(float[10]);
int main()
{
	float A[10],s;
	s = sum(A);
	cout << "Sum is  : "<<s<<endl;
	return 0;
}
float sum(float s[10])
{
	float b=0;
	for (int a=0;a<10;a++)
	{
		cout<<a+1 << " Enter : ";cin>>s[a];
		b+=s[a];
	}
	return b;
}
