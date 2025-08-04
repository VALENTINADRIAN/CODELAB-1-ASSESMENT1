#include <iostream>
#include <string>
using namespace std;

int main() {
    // description, start, end, step for each task
    struct Task {
        string desc;
        int start;
        int end;
        int step;
    };

    Task tasks[] = {
        {"Count from 0 to 50 by increments of 1", 0, 50, 1},
        {"Count from 50 down to 0 by decrements of 1", 50, 0, -1},
        {"Count from 30 to 50 by increments of 1", 30, 50, 1},
        {"Count down 50 to 10 by decrements of 2", 50, 10, -2},
        {"Count up 100 to 200 by increments of 5", 100, 200, 5}
    };

    // loop through each task
    for (auto &[desc, start, end, step] : tasks) {
        cout << desc << ":\n";
        // perform the counting
        for (int i = start;
             (step > 0 ? i <= end : i >= end);
             i += step) {
            cout << i << " ";
        }
        cout << "\n\n";
    }

    // end of programme
    return 0;  
}
