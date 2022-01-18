//
//  main.cpp
//  l
//
//  Created by MOHAMMAD AMMAN on 18/01/22.
//

#include <iostream>

using namespace std;

int main()
{
    int number,smallest, largest;
    double sum=0, average;
    int arr[number];
    cout << "Number of values: ";
    cin >> number;

  
    cout << "Enter the numbers:";arr;
    for (int i = 0; i < number; i++)
        cin >> arr[i];
    smallest = largest = arr[0];

    for (int i = 0; i < number; i++)
    {
        sum += arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
        
        if (arr[i] > largest)
            largest = arr[i];
    }

    average = sum / number;

   
    cout << "Smallest Number is: " << smallest << endl;
    cout << "Largest Number is: " << largest << endl;
    cout << "Average Number is: " << average << endl;

    return 0;
}
