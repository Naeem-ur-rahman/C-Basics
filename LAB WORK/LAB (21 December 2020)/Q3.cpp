#include <iostream>

using namespace std;
struct res
{
	int marks;
	char grade;
	
}rs;
struct rec
{
	int rollno;
	char result_type[10];
}rc;
int main(){
	
	cout << "Enter the Roll no : ";cin>>rc.rollno;
	cout << "Enter the Marks   : ";cin>>rs.marks;

	cout << "Enter the Grade   : ";cin>>rs.grade;
	cout << "Enter the Status  : ";cin.getline(rc.result_type,10,'#');
	
	cout <<endl;
	for (int a=1;a<=50;a++)
	{
		cout << "_";
	}
	cout <<endl;
	cout <<"Roll number\tMarks\tGrade\tstatus"<<endl;
	cout <<rc.rollno<<'\t'<<'\t'<< rs.marks<<'\t'<<rs.grade<<'\t'<<rc.result_type<<endl;
	return 0;
}
