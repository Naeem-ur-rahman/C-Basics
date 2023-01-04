#include <iostream>
using namespace std;
int main()
{
	char c;
	cout << "Enter : ";cin>>c;
	switch (c)
	{
		case 'a'...'z' :
		case 'A'...'Z' :	
			{
				cout << "Input is Alphabhet"<<endl;
				switch (c)
				{
				case 'a'...'z' :
					{
						cout <<"Input is small Alphabet"<<endl;
						break;
					}
				case 'A'...'Z' :
				{
					cout << "Input is capital Alphabet"<<endl;
					break;
					}	
				}
				switch (c)
				{
					case 'a':
					case 'e':
					case 'i':
					case 'o':
					case 'u':
					case 'A':
					case 'E':
					case 'I':
					case 'O':
					case 'U':
						{
							cout << "Alphabet is vowel"<<endl;
							break;
						}
					default :
						{
							cout << "Alphabet is consonant"<<endl;
						}
				}
				break;
			}
		case '0'...'9' :
			{
				cout << "Input is digit "<<endl;
				if (c%2==0)
				{
					cout << "Digit is Even "<<endl;
				}
				else
				{
					cout << "Digit is odd" <<endl;
				}
				break;
			}
		default :
		{
			cout << "Invalid Input"<<endl;
			}	
	}
	return 0;
}
