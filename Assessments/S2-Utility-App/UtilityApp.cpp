#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <limits>

using namespace std;

// structures used in the vending machine
struct Item {
    string code;     // item code e.g. "1A"
    string name;     // item name e.g. "Cadbury"
    double price;    // e.g. 1.20
    int category;    // 1..4
};

// global data
map<int,string>   categories;
vector<Item>      items;
map<string,Item*> lookupTable;

// initialise categories, items, and lookup table
void initializeData() {
    categories = {
        {1, "Chocolate"},
        {2, "Hot Drinks"},
        {3, "Snacks"},
        {4, "Drinks"}
    };
    items = {
        {"1A","Cadbury",       1.20,1},
        {"1B","Kit Kat",       1.10,1},
        {"2A","Coffee",        0.80,2},
        {"2B","Tea",           0.70,2},
        {"2C","Hot Chocolate", 1.00,2},
        {"3A","Lays",          1.50,3},
        {"3B","Cookie Pack",   1.30,3},
        {"3C","Biscuit Pack",  1.25,3},
        {"4A","Soda",          1.00,4},
        {"4B","Water",         0.90,4}
    };
    for (auto &it : items) {
        lookupTable[it.code] = &it;
    }
}

// the menu grouped by category is displayed
void displayMenu() {
    cout << "\n===== VENDING MACHINE MENU =====\n";
    for (auto &cat : categories) {
        cout << "\n[" << cat.first << "] " << cat.second << "\n";
        for (auto &it : items)
            if (it.category == cat.first)
                cout << "  " << it.code
                     << " - " << setw(15) << left << it.name
                     << " GBP " << fixed << setprecision(2) << it.price
                     << "\n";
    }
    cout << "=================================\n";
}

// user is prompted to enter a code and validation
Item* selectProduct() {
    string code;
    while (true) {
        cout << "Enter item code (e.g. 1A): ";
        cin >> code;
        if (lookupTable.count(code))
            return lookupTable[code];
        cout << "Invalid code. Please try again.\n";
    }
}

// accept money until the amountNeeded is reached; return excess change; validate whether money entered is in digits
double acceptPayment(double amountNeeded) {
    double collected = 0.0;
    while (collected + 1e-9 < amountNeeded) {
        cout << "Insert money (GBP "
             << fixed << setprecision(2)
             << (amountNeeded - collected)
             << " remaining): ";
        double coin;
        if (!(cin >> coin) || coin <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid amount. Enter digits only.\n";
            continue;
        }
        collected += coin;
    }
    return collected - amountNeeded;
}

// dispense function (1) - dispensing the item for the user to collect
void dispenseItem(const Item* chosen) {
    cout << "\n--- DISPENSING ITEM ---\n"
         << "Collect your " << chosen->name
         << " (" << chosen->code << ")\n"
         << "-----------------------\n\n";
}

// dispense function (2) - dispensing the change for the user to collect; or display no change due message if no change is due
void dispenseChange(double change) {
    if (change > 1e-9) {
        cout << "--- DISPENSING CHANGE ---\n"
             << "Collect your change: GBP "
             << fixed << setprecision(2) << change
             << "\n------------------------\n\n";
    } else {
        cout << "No change due.\n\n";
    }
}

// ask whether the user wants to engage in another purchase
bool morePurchases() {
    char resp;
    while (true) {
        cout << "Buy another item? (y/n): ";
        cin >> resp;
        resp = tolower(resp);
        if (resp == 'y') return true;
        if (resp == 'n') return false;
        cout << "Please enter 'y' or 'n'.\n";
    }
}

int main() {
    initializeData();
    cout << "\nWelcome to the Vending Machine!\n";

    double credit = 0.0;
    do {
        displayMenu();

        // Step 1) user selects the product
        Item* chosen = selectProduct();

        // Step 2) user pays (function covers any existing credit first or asks user for amountNeeded if existing credit does not cover item price)
        if (credit + 1e-9 >= chosen->price) {
            credit -= chosen->price;
            cout << "Used your credit. Remaining credit: GBP "
                 << fixed << setprecision(2) << credit << "\n";
        }
        else {
            double needed = chosen->price - credit;
            cout << "You have GBP " << fixed << setprecision(2)
                 << credit << " credit, need GBP "
                 << needed << " more.\n";
            double extra = acceptPayment(needed);
            credit = extra;
        }

        // Step 3) dispense item for the user to collect
        dispenseItem(chosen);

        // show updated credit to the user
        cout << "Current credit: GBP "
             << fixed << setprecision(2) << credit
             << "\n\n";
    }
    while (morePurchases());

    // Step 4) dispense whatever credit remains for the user to collect
    dispenseChange(credit);
    cout << "Thank you for your purchase! Goodbye.\n";
    return 0;
}
