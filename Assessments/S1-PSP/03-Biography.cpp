#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    // prompt for full name (insert first and last name with a space between)
    cout << "Enter your full name: (First and Last names with space)";
    string name;
    getline(cin, name);

    // prompt for hometown
    cout << "Enter your hometown: ";
    string hometown;
    getline(cin, hometown);

    // prompt for age and validation of whether age is a number
    cout << "Enter your age: ";
    int age;
    while (!(cin >> age)) {
        // clear the error flag
        cin.clear();
        // discard invalid input up to newline
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input - please enter a number for age: ";
    }

    // single cout used to output all details, each on its own line
    cout << "\nYour details:\n"
         << name << endl
         << hometown << endl
         << age << endl;

	// end of programme
    return 0; 
}
