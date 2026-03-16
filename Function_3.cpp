#include <iostream>
using namespace std;

// Function to input hours and minutes
void input(int& hours24, int& minutes) {
    cout << "Enter 24 hour time in the format HH MM: ";
    cin >> hours24 >> minutes;
}

// Function to output hours and minutes in HH:MM format
void output(int hours, int minutes) {
    if (hours < 10) cout << "0";  // add leading zero
    cout << hours << ":";
    if (minutes < 10) cout << "0"; // add leading zero
    cout << minutes << endl;
}

int main() {
    int timeHours, timeMinutes, waitHours, waitMinutes, finishHours, finishMinutes;

    cout << "Compute completion time from current time and waiting period\n";

    char ans = 'y'; 
    while (ans == 'y' || ans == 'Y') {
        cout << "Current time:\n";
        input(timeHours, timeMinutes);

        cout << "Waiting time:\n";
        input(waitHours, waitMinutes);

        // Add hours and minutes
        finishHours = timeHours + waitHours;
        finishMinutes = timeMinutes + waitMinutes;

        // Handle minute overflow
        finishHours += finishMinutes / 60;
        finishMinutes %= 60;

        // Handle hour overflow
        if (finishHours >= 24) {
            finishHours %= 24;
            cout << "Completion time is in the day following the start time\n";
        }

        cout << "Completion Time in 24 hour format: ";
        output(finishHours, finishMinutes);

        cout << "\nEnter Y or y to continue, any other halts: ";
        cin >> ans;
    }

    return 0;
}
