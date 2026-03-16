#include <iostream>
#include <cstdlib>
using namespace std;

// Function to flip a coin
string CoinFlip() {
    int flip = rand() % 2; // 0 or 1
    return (flip == 1) ? "Heads" : "Tails";
}

int main() {
    int numFlips;
    srand(2); // fixed seed

    cin >> numFlips;

    for (int i = 0; i < numFlips; i++) {
        cout << CoinFlip();
        if (i != numFlips - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
