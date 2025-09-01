#include <iostream>
using namespace std;

// What is an enum?
// "enum" (short for enumeration) is a user-defined type
// that consists of a set of named integral constants.
// By default, the first value is 0, and each subsequent
// value increases by 1 unless explicitly specified.
//
// Why use enum?
// 1. Improves readability (mon, tue, ... instead of 0,1,2).
// 2. Groups related constants together.
// 3. Provides type safety (cannot accidentally assign random integers).
// 4. Makes code easier to maintain.

// Simple enum (default: starts from 0, increases by 1)
enum day
{
    mon, // 0
    tue, // 1
    wed, // 2
    thu, // 3
    fri, // 4
    sat, // 5
    sun  // 6
};

// Enum with custom starting value
enum new_day
{
    new_mon = 1, // starts at 1
    new_tue,     // 2
    new_wed,     // 3
    new_thu,     // 4
    new_fri,     // 5
    new_sat,     // 6
    new_sun      // 7
};

// Alternative ways to define constants (less recommended):
// #define mon 0;        // Preprocessor constant (no type safety, global)
// const int mon = 0;    // Typed constant but does not group related values
// Enums are better because they group constants together in one type.

int main()
{
    day d; // variable of type enum day

    // d = 1; Not allowed → enums cannot take raw integers directly
    d = mon;           // valid: assign using enum name
    cout << d << endl; // Output: 0 (mon = 0)

    d = fri;
    cout << d << endl; // Output: 4 (fri = 4)

    new_day nd; // variable of type enum new_day

    nd = new_mon;
    cout << nd << endl; // Output: 1 (new_mon = 1)

    nd = new_fri;
    cout << nd << endl; // Output: 5 (new_fri = 5)

    return 0;
}
