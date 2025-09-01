#include <iostream>
using namespace std;

int main()
{
    int a = 11, b = 7, c;
    // Bitwise AND (&): Compares each bit of a and b
    // a = 11 → binary: 1011
    // b =  7 → binary: 0111
    // ----------------------
    // AND →      0011 = 3
    c = a & b;
    cout << c << endl; // Output: 3

    int d = 11, e = 7, f;
    // Bitwise OR (|): Compares each bit of d and e
    // d = 11 → binary: 1011
    // e =  7 → binary: 0111
    // ----------------------
    // OR  →      1111 = 15
    f = d | e;
    cout << f << endl; // Output: 15

    int g = 11, h = 7, i;
    // Bitwise XOR (^): 1 if bits are different, 0 if same
    // g = 11 → binary: 1011
    // h =  7 → binary: 0111
    // ----------------------
    // XOR →      1100 = 12
    i = g ^ h;
    cout << i << endl; // Output: 12

    char j = 5, k;
    // Left shift (<<): Shifts bits to the left, fills with 0 on the right
    // j = 5 → binary: 00000101
    // j << 1 →       00001010 = 10
    k = j << 1;
    cout << (int)k << endl; // Output: 10

    char l = 20, m;
    // Right shift (>>): Shifts bits to the right, fills with 0 on the left (for positive numbers)
    // l = 20 → binary: 00010100
    // l >> 1 →        00001010 = 10
    m = l >> 1;
    cout << (int)m << endl; // Output: 10

    char x = 5, y;
    // Bitwise NOT (~): Flips all bits (1 → 0, 0 → 1)
    // x = 5 → binary: 00000101
    // ~x   →        11111010 = -6 (in 2's complement form)
    y = ~x;
    cout << (int)y << endl; // Output: -6

    return 0;
}
