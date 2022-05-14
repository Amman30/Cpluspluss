//
//  main.cpp
//  xyz.cpp
//
//  Created by MOHAMMAD AMMAN on 14/05/22.
//
#include <iostream>
using namespace std;
class tollBooth{
private:
    unsigned int cars;
    double amount;
public:
tollBooth();
    void payingcar();
    void leftcar();
    void display() ;
    
};
tollBooth::tollBooth() {
cars = 0;
amount = 0;
}
void tollBooth::payingcar(){
    cars=cars+1;
    amount=amount+0.5;
}
void tollBooth::leftcar(){
    cars=cars+1;
}
void tollBooth::display()  {
    cout<<"Total cars are "<<cars<<" and Total amout collected is $"<<amount<<endl;
}
int main(){
    
    tollBooth x;
    x.payingcar();
    x.payingcar();
    x.payingcar();
    x.payingcar();
    x.payingcar();
    x.payingcar();
    x.leftcar();
    x.leftcar();
    x.leftcar();
    x.leftcar();
    x.leftcar();
    x.display();
    
    return 0;
}



//

//Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps track of the number of cars that have gone by, and of the total amount of money collected. Model this tollbooth with a class called tollBooth. The two data items are a type unsigned int to hold the total number of cars, and a type double to hold the total amount of money collected. A constructor initializes both of these to 0. A member function called paying Car() increments the car total and adds 0.50 to the cash total. Another function, called payCar(), increments the car total but adds nothing to the cash total. Finally, a member function called display() displays the two totals. Make appropriate member functions const.
