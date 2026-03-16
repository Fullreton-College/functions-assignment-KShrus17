#include <iostream>
using namespace std;

// Function to compute the number of coins of a given denomination
void computeCoins(int coinValue, int& num, int& amountLeft) {
    num = amountLeft / coinValue;
    amountLeft -= num * coinValue;
}

int main() {
    char ans;
    do {
        int amount;
        cout << "Enter amount of cents (1-99): ";
        cin >> amount;

        int quarters, dimes, pennies;
        int amountLeft = amount;

        // Compute coins
        computeCoins(25, quarters, amountLeft);
        computeCoins(10, dimes, amountLeft);
        computeCoins(1, pennies, amountLeft);

        // Output result
        cout << amount << " cents can be given as ";
        cout << quarters << " quarter(s), ";
        cout << dimes << " dime(s), and ";
        cout << pennies << " penny(pennies)." << endl;

        cout << "Enter Y or y to continue, any other to halt: ";
        cin >> ans;

    } while (ans == 'Y' || ans == 'y');

    return 0;
}
