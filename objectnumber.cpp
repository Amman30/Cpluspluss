#include <iostream>
using namespace std;

class CounterClass {
private:
static int counter;
int number;

public:
CounterClass() {
number = ++counter;
};

void tell_number() {
cout << "I am object " << number << endl;
};
};


int CounterClass::counter = 0;

int main() {
CounterClass obj1;
CounterClass obj2;
CounterClass obj3;
obj1.tell_number();
obj2.tell_number();
obj3.tell_number();

}
