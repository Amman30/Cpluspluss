#include <iostream>
using namespace std;


template <class T1,class T2>
class fun{
private:
    T1 a;
    T2 b;
public:
    fun(T1 a,T2 b){};
    
    void addstrings(T1 a, T2 b){
        cout<<"Concatination is:"<<a<<b<<endl;
    };
    void addnumbers(T1 a,T2 b){
        cout<<"sum is:"<<a+b<<endl;
        
    }
};
int main ()
{
    fun<int,int>f1(0,0);
    f1.addnumbers(10,20);
    fun<string,string>f2("","");
    f2.addstrings("abc","efg");

    
    return 0;
}


