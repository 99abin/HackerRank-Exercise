#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Function to determine if Anna was charged correctly for her meal
void bonAppetit(vector<int> bill, int k, int b) {
   // Calculate the total sum of the bill using accumulate
   int sum = accumulate(bill.begin(), bill.end(), 0);

   // Check if the amount charged (b) is correct
   // The correct amount should be half of the total bill minus the cost of the item Anna didn't eat (bill[k])
   if (b - (sum - bill[k]) / 2 != 0) {
     // If the charged amount is incorrect, print the difference
     cout << b - (sum - bill[k]) / 2;
   } else {
     // If the charged amount is correct, print "Bon Appetit"
     cout << "Bon Appetit";
   }
}

int main() {
   int x, k, temp, a; // Declare variables for the number of items, index of the item Anna didn't eat, temporary storage, and the amount charged
   vector<int> inp; // Vector to store the costs of the items in the bill

   // Read the number of items in the bill and the index of the item Anna didn't eat
   cin >> x >> k;

   // Read the costs of each item and store them in the inp vector
   for (int i = 0; i < x; i++) {
       cin >> temp;
       inp.push_back(temp);
   }

   // Read the amount charged to Anna
   cin >> a;

   // Call the function to check if the charge was correct
   bonAppetit(inp, k, a);
}
