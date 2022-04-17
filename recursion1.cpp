//
//  main.cpp
//  xyz.cpp
//
//  Created by MOHAMMAD AMMAN on 05/03/22.
//

#include <iostream>
#include <math.h>
using namespace std;

int palindrome(string s){
    int count=0,i;
    for(i=0;s[i]!='\0';i++){
        count++;
    }
    
    for(i=0;i<=count;i++){
       if(s[i]!=s[count-i-1])
           return 0;
    }
    return 1;
}




int main(){
    string s;
    cout<<"ENTER THE STRING"<<endl;
    cin>>s;
    cout<<palindrome(s);
    return 0;
}


