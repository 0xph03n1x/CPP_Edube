/*
long – is used to declare that we need a wider range of ints than the standard one;

short – is used to determine that we need a narrower range of ints than the standard one;

unsigned – used to declare that a variable will be used only for non-negative numbers; this might surprise you, but we can use this modifier together with the type char.

char - most compilers assume variable of char type is stored in 8 bits (1 byte).
*/
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main(void)
{
    short int counter;  // 16 bits long [-32768 to 32767]. The word int may be omitted.
    short Counter;
    long int ants;  //64 bits long [-9223372036854775808 .. 9223372036854775807]. The word int may be omitted.
    long Ants;
    unsigned int positive;  //if a variable will never be a negative value, use the unsigned modifier. The word int may be omitted.
    unsigned Positive;
    unsigned long int big_number;   //Can mix the modifiers, e.g. Cna still omit the word int.
    unsigned long Big_number;
    unsigned short int lambs;   //Same for shoft modifier.
    unsigned short Lambs;
    unsigned char little_counter;   //If we treat the char variable as a signed integer number, its range would be [-128 .. 127]. If we don’t need any signed value (as in the example below), its range shifts to [0 .. 255].


    const char test[2] = "a";   //const tier promises you'll not manipulate the string. String is stored in const section, which is READ-ONLY memory.
    cout << strlen(test) << endl;

	/*
	A variable of type float cannot have a *short* modifier. But it can have a long modifier which is synonymous with another typoe called *double*
	For example, we expect that the value:
	1111111111111111111.111111111111111111111

	will be stored by a specific type of computer as:
	1111111131851653120.000000

	A 32-bit long float variable saves only 8 precise digits.
	Using a double guarantees accuracy about 15-17 digits, hence the name.
	*/
}