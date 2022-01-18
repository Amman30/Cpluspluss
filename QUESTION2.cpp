#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number,smallest, largest;
    double sum=0, average,sum_squares, standard_deviation;;
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
    average = sum /number;
        standard_deviation = sqrt((sum_squares/number) - (average * average));
        cout << "Range: [" << smallest << ", " << largest << "]" << endl;
        cout << "Standard Deviation: " << standard_deviation << endl;
        return 0;
}
