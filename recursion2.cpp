//
//  main.cpp
//  xyz.cpp
//
//  Created by MOHAMMAD AMMAN on 05/03/22.
//

#include <iostream>
#include <math.h>
using namespace std;

int fun(int x){
    if(x==0)
    {
        return 0;
    }
    return fun(x-1)+2;
}




int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<fun(n);
    return 0;
}


