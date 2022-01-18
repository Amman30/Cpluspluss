//
//  main.cpp
//  CPP
//
//  Created by MOHAMMAD AMMAN on 18/01/22.
//

#include <iostream>

using namespace std;

int main()
{
    int number,i;
     int temperatures[number];
    int hot_days = 0,pleasant_days = 0,cold_days= 0;
    cout << "HOW MANY TEMPERATURES DO YOU WANT TO CHECK: ";
    cin >> number;

   
    cout << "ENTER THE TEMPERATURES OF" << number <<"DAYS"<< endl;
    for (i = 0; i < number; i++)
        cin >> temperatures[i];
    
    
    for (i = 0; i < number; i++)
    {
        cout << " Fahrenheit:  "<< temperatures[i];

        if (temperatures[i] >= 85)
        {
            cout << " -->Hot";
            hot_days++;
        }
        else if (temperatures[i] >= 60 && temperatures[i] <= 84)
        {
            cout << " -->Pleasant";
            pleasant_days++;
        }
        else if (temperatures[i] < 60)
        {
            cout << " -->Cold";
            cold_days++;
        }

        cout << " day" << endl;
    }
    cout << "TOTAL HOT DAYS ARE: " << hot_days << endl;
    cout << "TOTAL COLD DAYS ARE: " << cold_days<< endl;
    cout << "TOTAL PLEASANT DAYS ARE: " << pleasant_days<<endl;
    

    return 0;
}


