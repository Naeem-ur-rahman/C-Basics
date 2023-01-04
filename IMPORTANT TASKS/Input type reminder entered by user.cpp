#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	char c;
	cout << "Enter a Chracter : ";c=getche();
    cout <<endl;
	switch(c)
	{
		
		case 'a'...'z':
		case 'A'...'Z':
			{
				cout << "You Entered a Alphabet "<<endl;break;
				
			}
		case '0'...'9':
			{
				cout <<"You Entered a Digit "<<endl;break;
			}
		case ' ':
			{
				cout << "You Entered a Space "<<endl;break;
			}
			default :
		{
			cout <<"You Entered A special Character "<<endl;
		}
	}
	
	return 0;
}
