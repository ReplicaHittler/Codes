#include <iostream>
using  namespace std;

class turbo
{
	int num ;
	string name ;
	public:
	turbo ()
	{
		num = 0 ;
		name = "" ;
	}
	turbo (int i,string j)
	{
		num = i ;
		name = j ;
	}
	void displayit ()
	{
		cout<<name<<endl;
		cout<<num<<endl;
	}
	turbo operator+ (turbo abcdef)
	{
		turbo cpp ;
		cpp.num = this->num + abcdef.num ;
		cpp.name = this->name + abcdef.name ;
		return cpp;
	}
};

int main()
{
	turbo p1 (15,"Ahad") ;
	turbo p2 (5," Butt") ;
	turbo p3 ;
	p3 = p1 + p2 ;
	p3.displayit() ;
	return 0 ;
}
