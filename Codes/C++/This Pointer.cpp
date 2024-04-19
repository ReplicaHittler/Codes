#include <iostream>

class MyClass {
public:
    void printAddress() {
        std::cout << "Address of the current object using 'this': " << this << std::endl;
    }

    void setValue(int value) {
        // 'this' is implicitly used to access the member variable of the current object
        this->value = value;
    }

    int getValue() {
        // 'this' is not explicitly required here, but it is implicitly used by the compiler
        return value;
    }

private:
    int value;
};

int main() {
    MyClass obj1, obj2;

    obj1.printAddress();
    obj2.printAddress();

    obj1.setValue(42);
    std::cout << "Value in obj1: " << obj1.getValue() << std::endl;

    return 0;
}

