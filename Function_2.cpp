#include <iostream>
using namespace std;

// We will use cents for all monetary values. This will let us
// work with integer, rather than floating-point, variables.
const int TWINKIE_PRICE = 350;

// Prompt the user to insert coins until enough has been paid to buy
// a twinkie. The total amount inserted, in cents, is returned.
int accept_money();

// Returns the amount of change that should be returned to the user.
int compute_change(int total_paid);

int main()
{
    int money_entered, change;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // Collect money from the user
    money_entered = accept_money();

    // Figure out how much change to return
    change = compute_change(money_entered);

    // Dispense the twinkie
    cout << "\nEnjoy your deep-fried twinkie. Your change is $"
         << change / 100.0 << endl;

    return 0;
}

// Accept coins from the user until at least TWINKIE_PRICE is reached
int accept_money()
{
    int total = 0;
    char coin;

    while (total < TWINKIE_PRICE)
    {
        cout << "Insert coin (d= dollar, q=quarter, D=dime, n=nickel): ";
        cin >> coin;

        switch (coin)
        {
            case 'd': total += 100; break;
            case 'q': total += 25; break;
            case 'D': total += 10; break;
            case 'n': total += 5; break;
            default: cout << "Invalid coin. Try again.\n"; continue;
        }

        cout << "Total entered so far: $" << total / 100.0 << endl;
    }

    return total;
}

// Compute how much change to return
int compute_change(int total_paid)
{
    return total_paid - TWINKIE_PRICE;
}
