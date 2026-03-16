#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */
string CoinFlip() {
   int flip = rand() % 2;   // generates 0 or 1

   if (flip == 1) {
      return "Heads";
   }
   else {
      return "Tails";
   }
}

int main() {
   int numFlips;
   
   srand(2);  // Unique seed

   cin >> numFlips;

   for (int i = 0; i < numFlips; i++) {
      cout << CoinFlip();

      if (i < numFlips - 1) {
         cout << " ";
      }
   }

   cout << endl;

   return 0;
}
