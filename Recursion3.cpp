//
//  main.cpp
//  xyz.cpp
//
//  Created by MOHAMMAD AMMAN on 05/03/22.
//

#include <iostream>
#include <math.h>
using namespace std;

int vowel(string s){
    
    int i,count=0,temp=0;
    for(i=0;s[i]!='\0';i++){
        count++;
    }
    for(i=0;i<=count;i++){
        if(s[i]=='a'){
            temp++;
        }
      else  if(s[i]=='e'){
          temp++;
        }
       else if(s[i]=='i'){
           temp++;
        }
       else if(s[i]=='o'){
           temp++;
        }
       else if(s[i]=='u'){
           temp++;
        }
    }
    return temp;
}




int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<"Total no of vowels in the string you enter is "<<vowel(s)<<endl;
    return 0;
}


