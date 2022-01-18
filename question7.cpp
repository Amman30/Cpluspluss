//
//  main.cpp
//  question3
//
//  Created by MOHAMMAD AMMAN on 18/01/22.
//



#include <iostream>

using namespace std;

int main()
{
    for (int i=0; i<20; i++)
    {
        for (int j = 0; j<2*i + 1; j++)
            cout << "x";
        cout << endl;
    }

    return 0;
}
