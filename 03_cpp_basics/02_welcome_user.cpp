#include <iostream>
using namespace std;
int main() {
    // to get single word from the user
    // string name;
    // cout << "Enter your name: ";
    // cin >> name;
    // cout << "Welcome " << name << "!";

    // to get whole line with different words
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Welcome " << name << "!";

    return 0;
}