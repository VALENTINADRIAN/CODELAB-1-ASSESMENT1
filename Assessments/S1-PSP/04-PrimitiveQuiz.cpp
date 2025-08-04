#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 10 quiz questions
    const int NUM_QUESTIONS = 10;

    // list of countries
    string countries[NUM_QUESTIONS] = {
        "France", "Belgium", "Hungary", "Denmark", "Greece",
        "Portugal", "United Kingdom", "Austria", "Ireland", "Germany"
    };

    // corresponding list of capitals
    string capitals[NUM_QUESTIONS] = {
        "Paris", "Brussels", "Budapest", "Copenhagen", "Athens",
        "Lisbon", "London", "Vienna", "Dublin", "Berlin"
    };

    // ask questions one after another and read the answers
    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        cout << "What is the capital of " << countries[i] << "? ";
        string answer;
        getline(cin, answer);

        // transform to lowercase to make answers case insensitive
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        string correct = capitals[i];
        transform(correct.begin(), correct.end(), correct.begin(), ::tolower);

        // Confirm whether answer is correct and display validation
        if (answer == correct) {
            cout << "Correct!" << endl;
        } else {
            cout << "Sorry, that's not correct. "
                 << "The capital of " << countries[i]
                 << " is " << capitals[i] << "." << endl;
        }
    }

    // end of programme
    return 0;
}
