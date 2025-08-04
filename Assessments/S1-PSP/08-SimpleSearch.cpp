#include <iostream>
#include <string>
using namespace std;

// search for target in array
int recursiveSearch(const string arr[], int size, const string &target, int index = 0) {
    if (index == size)                  
        return -1;
    if (arr[index] == target)          
        return index;
    return recursiveSearch(arr, size, target, index + 1);
}

int main() {
    // initialise array of names
    const int SIZE = 6;
    string names[SIZE] = {
        "Jake", "Zac", "Ian", "Ron", "Sam", "Dave"
    };

    // ask for user prompt
    cout << "Enter the name to search: ";
    string searchTerm;
    getline(cin, searchTerm);

    // perform the search
    int pos = recursiveSearch(names, SIZE, searchTerm);

    // report result
    if (pos != -1) {
        cout << searchTerm << " is listed at index " << pos << "." << endl;
    } else {
        cout << searchTerm << " is not listed in the index " << endl;
    }

    // end of programme
    return 0;  
}
