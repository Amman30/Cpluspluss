#include <iostream>
using namespace std;

class employee{
private:
    string employee_name;
    long int employee_no;
public:
    employee(){};
  void  getdata(){
        cout<<"Enter Employe name"<<endl;
        cin>>employee_name;
        cout<<"Enter Employee no;"<<endl;
        cin>>employee_no;
    };
    void putdta(){
        cout<<"Employe name is:"<<employee_name<<endl;
        cout<<"Emplyee num is :"<<employee_no<<endl;
    }
    
};


int main ()
{
    employee one,second,third;
    one.getdata();
    second.getdata();
    third.getdata();
    one.putdta();
    second.putdta();
    third.putdta();
    return 0;
}


//
//Create a class called employee that contains a name (an object of class string) and an employee number (type long). Include a member function called getdata() to get data from the user for insertion into the object, and another function called putdata() to display the data. Assume the name has no embedded blanks.
//Write a main() program to exercise this class. It should create an array of type employee, and then invite the user to input data for up to 100 employees. Finally, it should print out the data for all the employees.
