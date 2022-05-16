#include <iostream>
using namespace std;

struct point{
    double coodinate1,coodinate2,coodinate3;
    
    double addpoints(double a,double b){
        double c;
        return c=a+b;
    };
};

int main ()
{
    double c1,c2;
    point p1;
   
    
    cout<<"Enter first point:"<<endl;
    cin>>c1;
    cout<<"Enter second point:"<<endl;
    cin>>c2;
    
    cout<<"Point3 is equal to:"<<p1.addpoints(c1,c2)<<endl;

    return 0;
}


//A point on the two-dimensional plane can be represented by two numbers: an x coordi- nate and a y coordinate. For example, (4,5) represents a point 4 units to the right of the vertical axis, and 5 units up from the horizontal axis. The sum of two points can be defined as a new point whose x coordinate is the sum of the x coordinates of the two points, and whose y coordinate is the sum of the y coordinates.
//Write a program that uses a structure called point to model a point. Define three points, and have the user input values to two of them. Then set the third point equal to the sum of the other two, and display the value of the new point. Interaction with the program might look like this:
//     Enter coordinates for p1: 3 4
//     Enter coordinates for p2: 5 7
//     Coordinates of p1+p2 are: 8, 11
