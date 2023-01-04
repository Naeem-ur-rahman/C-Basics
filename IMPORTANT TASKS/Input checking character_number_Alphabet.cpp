#include <iostream>
using namespace std ;
int main ()
{
	char a ;
	cout << "Enter the Input "<<endl;
	cin >> a;
	
    if ( a >= 'A' && a<= 'Z' || a >= 'a' && a<= 'z' )
   
    {   
    	cout << "Your Enter input is Alphabet " << endl;
	
	if ( a >= 'A' && a <= 'Z')
	{
	   cout << "Your Enter input is Capital Alphabet"<<endl;	
	}
	
	else if ( a >='a' && a <='z' )
	{
		cout << "Your Enter input is Small Alphabet"<<endl;
	}
	if ( a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
	{
		cout << "Your Enter input is Vowel"<<endl;
	}
	else 
	{
		cout << "Your Enter input is not Vowel"<<endl;
	}
	}
		if ( a >= '0' && a<= '9' )
	{
		cout << "Your Enter input is Number"<<endl;
	 if ( a % 2 == 0 )
	 {
	 	cout << "Your Enter input is Even number"<<endl;
	 }
	 else if ( a % 2 == 1 )
	 {
	 	cout << "Your Enter input is odd number"<<endl;
	 }
	}	
	if ( a >= 'A' && a<= 'Z' || a >= 'a' && a<= 'z' || a >= '0' && a<= '9' )
	{
	}
	else
	{
		cout << "Invald input"<<endl;
	}

	system ("pause");
	return 0;
}
