# include <iostream>
using namespace std;

class counter
{
	value ;
	public:
	counter()
	{
		value = 0 ;
	}
	counter operator ++ ()
	{
		counter *this;
		value ++;
		return value;
	}
	void displayit ()
	{
		cout<<"Value : "<<value<<endl;
	}
};

int main()
{
	counter obj;
	obj++;
	
}
