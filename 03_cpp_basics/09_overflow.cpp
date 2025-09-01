#include<iostream>
using namespace std;

int main()
{
    char ch = 128;  
    // In most systems, 'char' is a signed 8-bit type → range: -128 to 127
    // 128 cannot be represented, so it wraps around (overflow).
    // Stored value = -128 due to 2's complement representation.
    cout << (int)ch << endl; // Output: -128 

    char ch1 = 127;
    // 127 is within the valid range for signed char (-128 to 127).
    // No overflow occurs, stored as 127.
    cout << (int)ch1 << endl; // Output: 127

    char ch2 = 129;
    // 129 is outside range of signed char.
    // Wrap-around occurs: 129 - 256 = -127 (because char stores in 8-bit 2's complement).
    cout << (int)ch2 << endl; // Output: -127

    char ch3 = -128;
    ch3--;  
    // Starting at -128 (lowest signed char value).
    // Decrementing causes underflow: it wraps around to 127.
    cout << (int)ch3 << endl; // Output: 127

    int i = 2147483647; 
    // Maximum value for 32-bit signed int = 2,147,483,647 (2^31 - 1).
    i++;  
    // Increment causes overflow: wraps around to minimum int value = -2,147,483,648
    cout << (int)i << endl; // Output: -2147483648

    return 0;
}