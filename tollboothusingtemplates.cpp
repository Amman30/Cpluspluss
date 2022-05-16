#include <iostream>
using namespace std;
template <class T1,class T2>
class tollbooth{
private:
    T1 cars;
    T2 amount;
public:
    tollbooth(T1 a,T1 b){
        cars=a;
        amount=b;
    };//constructor.
    void payingcar(){
        cars=cars+1;
        amount=amount+0.5;
    };
    void nopaycar(){
        cars=cars+1;
    };
    void display(){
        cout<<cars<<endl<<amount<<endl;
    };
};




int main ()
{
    tollbooth <int,double>t1(0,0);//paying car
    /// no paying car
    tollbooth<int, double>t2(1,1);
    t1.payingcar();
    t1.payingcar();
    t1.nopaycar();
    
    t1.display();
    t2.payingcar();
    t2.payingcar();
    t2.nopaycar();
    
    t2.display();
    
    
    return 0;
}


//Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps track of the number of cars that have gone by, and of the total amount of money collected.
//6
//OBJECTS AND CLASSES
//
//
//
//Model this tollbooth with a class called tollBooth. The two data items are a type unsigned int to hold the total number of cars, and a type double to hold the total amount of money collected. A constructor initializes both of these to 0. A member function called payingCar() increments the car total and adds 0.50 to the cash total. Another function, called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a member function called display() displays the two totals. Make appropriate member functions const.
//Include a program to test this class. This program should allow the user to push one key to count a paying car, and another to count a nonpaying car. Pushing the Esc key should cause the program to print out the total cars and total cash and then exit.
