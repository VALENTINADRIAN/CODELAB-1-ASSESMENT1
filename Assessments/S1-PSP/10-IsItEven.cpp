#include <iostream>
#include <string>
using namespace std;

// determine even/odd and show output to user
string checkEven(int number) {
    return (number % 2 == 0)
         ? "The provided number is even"
         : "The provided number is odd";
}

// main function contains prompt to enter number and output message
int main() {
    int num;

    // prompt in main()
    cout << "Please enter an integer: ";
    if (!(cin >> num)) {
        cerr << "That is not a valid integer." << endl;
        return 1;
    }

    // output the function’s result from within the main() function
    cout << checkEven(num) << endl;

    // end of programme
	return 0;
}
