//
//  main.cpp
//  xyz.cpp
//
//  Created by MOHAMMAD AMMAN on 05/03/22.
//

#include <iostream>
#include <math.h>
using namespace std;


class Point{

    int x,y;
public:
     Point(int ,int );//constructor declaration.
    void display_point(){
        if(x==0 && y==0){
            cout<<"The point is at origin"<<endl;
        }
 if(x<0 && y>0){
            cout<<"The point is in 2nd quad"<<endl;
        }
 if(x<0 && y<0){
            cout<<"The point is in 3rd quad"<<endl;
        }
 if(x>0 && y<0){
            cout<<"The point is in 4Th quad"<<endl;
        }
  if(x>0 && y>0){
            cout<<"The point is in 1st quad"<<endl;
        }
        
    }
};
Point::Point(int a,int b){
x=a;
y=b;
}

int main(int argc, const char * argv[]) {
    int p1,p2;
    cout<<"Enter two numbers"<<endl;
    cin>>p1>>p2;
     Point o(p1,p2);
     o.display_point();
    return 0;
};




//take two point and reffer theri quadrant



//
