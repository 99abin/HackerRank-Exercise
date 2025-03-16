#include <iostream>
using namespace std;

// Function to print a staircase pattern of height n
void staircase(int n) {
   // Loop through each level of the staircase
   for (int i = 0; i < n; i++) {
       // Loop through each position in the current level
       for (int j = 0; j < n; j++) {
           // Print a space if the current position is before the '#' characters
           if (j < n - 1 - i) {
               cout << " "; // Print space for alignment
           } else {
               cout << "#"; // Print '#' to form the staircase
           }
       }
       cout << "" << endl; // Move to the next line after finishing the current level
   }
}

int main() {
   int inp; // Variable to hold the input height of the staircase
   cin >> inp; // Read the height of the staircase from user input
   staircase(inp); // Call the staircase function to print the pattern
}
