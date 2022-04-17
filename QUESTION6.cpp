#include <iostream>

using namespace std;

int main()
{
    int guests, chairs;
    long arrangements = 1;

    cout << "Number of guests: ";
    cin >> guests;

    cout << "Number of chairs: ";
    cin >> chairs;

    for (int i = 1; i <= chairs; i++)
        arrangements *= guests--;

    cout << "Number of arrangements possible: " << arrangements;

    return 0;
}
