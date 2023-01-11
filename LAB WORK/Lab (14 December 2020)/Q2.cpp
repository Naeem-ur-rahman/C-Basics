#include <iostream>
using namespace std;
int main()
{
	float A[10],s=0;
	for(int a=0;a<10;a++)
	{
		cout <<a+1<< "  Enter : ";cin>>A[a];cout<<endl;
		s+= A[a]; 
	}
	cout << "SUM is : "<<s <<endl<<endl;
	cout << "Average is : "<< s/10<<endl;
	return 0;
}
