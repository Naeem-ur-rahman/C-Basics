#include <iostream>
using namespace std;
struct dis 
{
	float d;     //distance
	float m;     //minutes
	float s;     //seconds
};
int main ()
{
	dis p1;
	dis p2;
	float pd1,pd2;
	char d;
	cout << "Enter record for player1 in format (distance,minutes,seconds) : ";
	cin>>p1.d>>d>>p1.m>>d>>p1.s;
	cout <<endl;
	cout << "Enter record for player2 in format (distance,minutes,seconds) : ";
	cin>>p2.d>>d>>p2.m>>d>>p2.s;
	cout <<endl;
	pd1 = p1.d/((p1.m*60)+p1.s);
	pd2 = p2.d/((p2.m*60)+p2.s);
	cout << "Winnner is : ";
	if (pd1>pd2)
	{
		cout <<"Player 1 with record "<<p1.d<<" distance in "<<p1.m<<" minutes and "<<p1.s<<" seconds "<<endl;
	}
	else if (pd2>pd1)
	{
		cout <<"Player 2 with record "<<p2.d<<" distance in "<<p2.m<<" minutes and "<<p2.s<<" seconds "<<endl;
	}
	return 0;
}
