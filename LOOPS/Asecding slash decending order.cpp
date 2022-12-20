#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int s,t;
	cout << "Enter number of Values : ";cin>>s;
	int arr[s],acs[s],dcs[s];
	cout << "Enter "<<s<<" values in Array "<<endl;
	for(int a=0;a<s;a++)
	{
		
		cin>>arr[a];
		acs[a]=dcs[a]=arr[a];
}
	for (int a=0;a<s-1;a++)
	{
		for (int b=0;b<s-1;b++)
		{
		if 	(acs[b]>acs[b+1])
		{
			t=acs[b];
			acs[b]=acs[b+1];
			acs[b+1]=t;
		}
		}
	}
		for (int a=0;a<s-1;a++)
	{
		for (int b=0;b<s-1;b++)
		{
		if 	(dcs[b]<dcs[b+1])
		{
			t=dcs[b];
			dcs[b]=dcs[b+1];
			dcs[b+1]=t;
		}
		}
	}
	cout << "Ascending order|Dscending order "<<endl;
	for (int a=0;a<s;a++)
	{
		cout << setw(8)<<acs[a]<<setw(8)<<"|"<<setw(8)<<dcs[a]<<endl;
	}
	return 0;
}
