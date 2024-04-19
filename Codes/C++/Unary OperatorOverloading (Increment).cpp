#include <iostream>
using namespace std;

class Counter
{
    int value;
public:
    Counter() 
	{
	value = 0 ;
	}

    Counter operator++() 
	{
        ++value;
        return *this;
    }

    Counter operator--() 
	{
        --value;
        return *this;
    }

    int getValue() const
	{
        return value;
    }
};

int main() {
    Counter myCounter;
    ++myCounter;

    cout << "After Increment: " << myCounter.getValue() <<endl;

    --myCounter;

	cout << "After Decrement: " << myCounter.getValue() << endl;

    return 0;
}

