#include <iostream>
using namespace std;
int main(void)
{
    // "" and '' are different - single means character, double means string literal

    char Char = 'X';
    int Int = Char;
    cout << Char << " " << (int)Char << " " << Int << " " << (char)Int;
    return 0;
}