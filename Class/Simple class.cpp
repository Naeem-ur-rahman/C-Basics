#include <iostream>
#include <iomanip>
using namespace std;
class bike{
	private:
		char name[30];
		char model[30];
		int price;
	public:	
	void input ()
	{
		cout << "Enter Name  : ";cin.getline(name,30);
		cout << "Enter Model : ";cin.getline(model,30);
		cout << "Enter Price : ";cin>>price;
		cin.ignore();   
	}
	void output()
	{
	    cout << setw(20)<<setiosflags(ios::left)<<name<<setw(20)<<setiosflags(ios::left)<<model<<setw(15)<<setiosflags(ios::left)<<price<<endl; 
	}
};
void line()
{
	for (int a=1;a<=60;a++ )
	{
		cout << "-";
	}
	cout <<endl;
}
int main ()
{
	cout << "Please ! Enter the information Asked Below"<<endl;
	bike b1,b2,b3;
	b1.input();
	b2.input();
	b3.input();
	
	line();
	cout << setw(20)<<setiosflags(ios::left)<<"Bike Name "<<setw(20)<<setiosflags(ios::left)<<"Bike Model"<<setw(15)<<setiosflags(ios::left)<<"Price"<<endl;
	line();
	b1.output();
	b2.output();
	b3.output();
	line();
	return 0;
}
