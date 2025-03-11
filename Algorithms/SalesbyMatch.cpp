#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to count the number of pairs of socks
int sockMerchant(int n, vector<int> ar) {
   // Sort the array of sock colors
   sort(ar.begin(), ar.end());
   int pair = 0; // Variable to count the number of pairs
   int count = 1; // Variable to count occurrences of the same sock color

   // Loop through the sorted array starting from the second element
   for (int i = 1; i < ar.size(); i++) {
       // If the current sock color is the same as the previous one
       if (ar[i] == ar[i-1]) {
           count++; // Increment the count for this color
       } else {
           count = 1; // Reset count for a new color
       }
       // If we have found a pair (2 socks of the same color)
       if (count == 2) {
           pair++; // Increment the pair count
           count = 0; // Reset count after forming a pair
       }
   }
   return pair; // Return the total number of pairs found
}

int main() {
   int n, temp; // Variables for the number of socks and temporary input
   vector<int> inp; // Vector to store the colors of the socks
   cin >> n; // Read the number of socks
   // Loop to read each sock color
   for (int i = 0; i < n; i++) {
       cin >> temp; // Read the color of the sock
       inp.push_back(temp); // Add the color to the vector
   }
   cout << sockMerchant(n, inp); // Output the number of pairs of socks
}
