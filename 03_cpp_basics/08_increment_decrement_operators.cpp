#include <iostream>
using namespace std;

int main()
{
    int i = 5, j;
    // Post-increment (i++):
    // Use the current value of i first, then increment i by 1.
    j = i++;  
    cout << j << " " << i << endl;  // j = 5, i = 6

    int k = 5, l;
    // Pre-increment (++k):
    // Increment k first, then use the incremented value.
    l = ++k;  
    cout << l << " " << k << endl;  // l = 6, k = 6

    int a = 5, b;
    // Expression mixing pre and post increment:
    // Step 1: ++a → increment a (5 → 6), then use 6 → 2*6 = 12
    // Step 2: a++ → use current value (6), then increment (6 → 7) → 2*6 = 12
    // Total = 12 + 12 = 24, final a = 7
    b = 2 * ++a + 2 * a++;
    cout << b << " " << a << endl;  // Output: 24 7

    int c = 5, d;
    // Both are post-increments (c++):
    // Step 1: use current value (5), then increment (5 → 6) → 2*5 = 10
    // Step 2: use current value (6), then increment (6 → 7) → 2*6 = 12
    // Total = 10 + 12 = 22, final c = 7
    d = 2 * c++ + 2 * c++;
    cout << d << " " << c << endl;  // Output: 22 7

    return 0;
}