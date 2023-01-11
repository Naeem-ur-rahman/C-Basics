#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	char a[30]="Hello";
	char b[30]=" Naeem ur Rahman Sajid";
	char c[30]={0};
	// first Function
	strcpy(c,a);
	cout << c << endl;
	// Secind Function
	cout << strcat(a,b)<<endl;
	// Third Function
	cout <<"Lenght of srting A : "<<strlen(a)<<endl;
	cout <<"Length of string B : "<<strlen(b)<<endl;
	cout <<"Length of string C : "<<strlen(c)<<endl;
	// fourth Funtion
	cout <<"Compare A to B string : "<< strcmp(a,b)<<endl;
	cout <<"Compare B to A string : "<< strcmp(b,a)<<endl;
	// fifth function
	 char a1[30]="Hello"; 
	  char b1[30]=" Naeem ur Rahman Sajid";
	cout << strncat(a1,b1,6)<<endl;
	return 0;
}
