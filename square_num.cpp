#include <iostream>
using namespace std;

int main(void)
{
    int value, square;
    cout << "Enter a number and receive its square: ";
    cin >> value;
    square = value * value;
    cout << "You gave " << value << endl;
    cout << "The square value is: " << square << endl;
    return 0;
}