#include <iostream>
using namespace std;
class counter{
	private :
		unsigned int count;
	public :	
	counter() :count(0)
	{  
	cout<<"I am constructor ! "<<endl;        
   }
	void in_count()
	{
		count++;
	}
	int get_count()
	{
		return count;
	}
};
int main ()
{
	counter c1,c2;
	cout << endl<<"c1 = "<<c1.get_count();
	cout << endl<<"c2 = "<<c2.get_count();
	c1.in_count();
	c2.in_count();
	c2.in_count();
	c2.in_count();	
	cout << endl<<"c1 = "<<c1.get_count();
	cout << endl<<"c2 = "<<c2.get_count();
	cout <<endl;
	return 0;
}
