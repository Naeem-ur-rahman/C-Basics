#include <iostream>
using namespace std;
struct date
{
	int month;
	int day;
	int year;
};
int main ()
{
	date today;
	char dummy;
	cout << "Enter date in foramt ( month / day / year ) : ";
	cin>>today.month>>dummy>>today.day>>dummy>>today.year;
	cout <<endl;
	cout << "You Entered : "<<today.month<<"/"<<today.day<<"/"<<today.year<<endl;
	return 0;
}
