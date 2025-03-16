#include <iostream>
#include <vector>
using namespace std;

// Function to count the number of apples and oranges that fall within a specified range
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
   int app = 0, org = 0; // Initialize counters for apples and oranges

   // Loop through each apple's distance from the apple tree
   for (int i = 0; i < apples.size(); i++) {
       // Check if the apple falls within the range [s, t]
       app += (apples[i] + a >= s && apples[i] + a <= t);
   }

   // Loop through each orange's distance from the orange tree
   for (int j = 0; j < oranges.size(); j++) {
       // Check if the orange falls within the range [s, t]
       org += (oranges[j] + b >= s && oranges[j] + b <= t);
   }

   // Output the count of apples and oranges that fell within the range
   cout << app << endl; // Print the number of apples
   cout << org << endl; // Print the number of oranges
}

int main() {
   int s, t, a, b, x, y, temp; // Declare variables for range, tree positions, and counts
   vector<int> apples, oranges; // Vectors to store the distances of apples and oranges

   // Read the input values for the range and tree positions
   cin >> s >> t >> a >> b >> x >> y;

   // Read the distances of the apples and store them in the apples vector
   for (int i = 0; i < x; i++) {
       cin >> temp;
       apples.push_back(temp);
   }

   // Read the distances of the oranges and store them in the oranges vector
   for (int j = 0; j < y; j++) {
       cin >> temp;
       oranges.push_back(temp);
   }

   // Call the function to count the apples and oranges that fall within the specified range
   countApplesAndOranges(s, t, a, b, apples, oranges);
}
