#include <iostream>
using namespace std;
class Distance {
	
	private :
		int feet;
		float inches;
	public:
		show_distance()
		{    cout<<"Your Stored distance is !"<<endl;
			cout << "Distance Is : "<<feet<<'\''<<inches<<'\"'<<endl;
		}
		get_distance()
		{
			cout << "Enter Distance !"<<endl;
			cout << "Enter Feets : ";cin>>feet;
			cout << "Enter Inches : ";cin>>inches;
		}
		get_arrguments(int x,float y)
		{
			feet =x;
			inches=y;
		}
		
};
int main ()
{
	Distance d1;
	int x;
	float y;
	cout << "Enter Feets : ";cin>>x;
	cout << "Enter Inches : ";cin>>y;
	d1.get_arrguments(x,y);
	d1.show_distance();
	d1.get_distance();
	d1.show_distance();
	return 0;
}
