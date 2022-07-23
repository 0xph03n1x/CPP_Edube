#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int byte = 255;
    cout << "Bytes in hex: " << hex /*This can be either hex < dec < byte value*/ << byte << "\n";

    /*
    Requires the iomanip header file.
    Using the setbase manipulator.
    The only acceptable values for the setbase parameter are 8, 10, 16.
    */

    cout << "Bytes in hex with setbase: " << setbase(16) << byte << "\n";
    return 0;
}