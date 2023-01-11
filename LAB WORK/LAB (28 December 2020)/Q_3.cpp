#include <iostream>
using namespace std;
int main()
{
	const int m=5;
	int array[m];
	int *pointer ;
	pointer = &array[m];
	for (int i=0;i<m;i++){
		cout << "Adress of array elements "<<i+1<<" : "<< pointer+i<<endl; 
		}
	return 0;
}
