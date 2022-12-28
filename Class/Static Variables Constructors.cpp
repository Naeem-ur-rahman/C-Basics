#include<iostream>
using namespace std;

class car{
	
	private :
	static int count;
	public :
	car(){
		count++;
	}	
	int show()
	{
		return count;
	}
};
int car::count =0;
int main()
{
	car c1,c2,c3;
	
	cout<<"Count1 is : "<< c1.show()<<endl;
	cout<<"Count2 is : "<< c2.show()<<endl;
	cout<<"Count3 is : "<< c3.show()<<endl;
	return 0;
}
