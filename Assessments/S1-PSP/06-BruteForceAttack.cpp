#include <iostream>
using namespace std;

int main() {
    // correct password
    const int correctPassword = 12345;
    
    // maximum allowed attempts
    const int maxAttempts = 5;
    
    // count how many attempts are used
    int attempts = 0;
    
    // variable to hold the user’s input
    int attemptValue;
    
    // keep prompting until password is correct or user is out of attempts
    while (attempts < maxAttempts) {
        // ask the user to enter the password
        cout << "Enter the password: ";
        cin >> attemptValue;
        
        // if correct, validate and end programme
        if (attemptValue == correctPassword) {
            cout << "Password Accepted" << endl;
            return 0;
        }
        
        // increment the failed-attempts counter
        attempts++;
        
        // if user still has attempts left, show the remaining count
        if (attempts < maxAttempts) {
            int remaining = maxAttempts - attempts;
            cout << "Incorrect. You have " << remaining
                 << " attempt" << (remaining == 1 ? "" : "s")
                 << " remaining." << endl;
        }
    }
    
    // alert prompt if all attempts are used up
    cout << "Too many failed attempts. Authorities have been alerted!" << endl;
    
    // end programme after failure
    return 0;  
}
