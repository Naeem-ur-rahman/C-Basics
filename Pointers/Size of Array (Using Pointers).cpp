// ptrtostr.cpp
// an array of pointers to strings
#include <iostream>
using namespace std;
const int DAYS = 7; //number of pointers in array
int main()
{ //array of pointers to char
char* arrptrs[DAYS] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
for(int j=0; j<DAYS; j++) //display every string
cout << arrptrs[j] << endl;
return 0;
}
/*
#include <iostream>
using namespace std;
const int DAYS = 7;
int main(){ 
char arrptrs[DAYS][100] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
for(int j=0; j<DAYS; j++){ 
for (int k=0;k<100;k++)
{
	cout << arrptrs[j][k];
	if (arrptrs[j][k]='\0')
	return 0;]
}
cout <<endl;
}
return 0;
}*/
