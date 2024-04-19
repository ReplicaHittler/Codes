# include <iostream>
using namespace std;
  
  class Negotiation
  {
  	float inches , feets ;
  	public:
	Negotiation ()
  	{
  	inches = 0;
	feets = 0;	
	}
  	Negotiation (float i,float j)
  	{
  	inches = i;
	feets = j;	
	}
	void displayit()
	{
	cout<<"Inches : "<<inches <<endl;
	cout<<"Feets : "<<feets <<endl;
	}
	Negotiation operator - ()
	{
  	inches = -inches;
	feets = -feets;	
	}
  };
  
  int main()
  {
  	Negotiation One(2.94,7.43),Two(4.26,8.12) ;
  	-One;
  	-Two;
  	One.displayit();
  	Two.displayit();
  }
