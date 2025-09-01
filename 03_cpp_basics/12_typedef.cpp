#include <iostream>
using namespace std;

// What is typedef?
// typedef is used to create a new name (alias) for an existing data type.
// It improves readability and makes code more meaningful.

// 1. Improves clarity (marks, rollno instead of plain int).
// 2. Makes code easier to understand in context.
// 3. Helps in portability (if the underlying type changes,
//    only typedef needs to be updated).

// Creating aliases for int
typedef int marks;  // 'marks' is now another name for int
typedef int rollno; // 'rollno' is also another name for int

int main()
{
    // Using typedef aliases
    marks m1, m2; // equivalent to: int m1, m2;
    rollno r1;    // equivalent to: int r1;

    // Assigning values
    m1 = 50;  // student scored 50 marks
    m2 = 90;  // student scored 90 marks
    r1 = 101; // student roll number is 101

    // Printing values
    cout << "Marks 1: " << m1 << endl;
    cout << "Marks 2: " << m2 << endl;
    cout << "Roll No: " << r1 << endl;

    return 0;
}
