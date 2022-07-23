#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    float value, squareroot;
    cout << "Give me a number and I'll give you its square root: " << endl;
    cin >> value;
    if(value >= 0.0) {
        squareroot = sqrtf(value);
        cout << "You gave the number: " << value << endl;
        cout << "It's square root is: " << squareroot << endl;
    }
    return 0;
}