#include <iostream>
#include <string>

using namespace std;

// Function to count the number of valleys traversed in a given path
int countingValleys(int steps, string path) {
   int level = 0; // Variable to track the current level (altitude)
   int vall = 0;  // Variable to count the number of valleys
   // Loop through each step in the path
   for (int i = 0; i < steps; i++) {
       // If the step is 'U' (uphill), increase the level
       if (path[i] == 'U') {
           level++;
       } 
       // If the step is 'D' (downhill), decrease the level
       else {
           level--;
       }
       // Check if we just came up to sea level from a valley
       vall += (level == 0 && path[i] == 'U'); // Increment valley count if we are at sea level after an uphill step
   }
   return vall; // Return the total number of valleys counted
}

int main() {
  int n; // Variable to hold the number of steps
  char temp; // Temporary variable to read each character of the path
  string inp; // String to store the entire path
  cin >> n; // Read the number of steps
  // Loop to read each character of the path
  for (int i = 0; i < n; i++) {
      cin >> temp; // Read a character (either 'U' or 'D')
      inp += temp; // Append the character to the path string
  }
   // Call the countingValleys function and print the result
   cout << countingValleys(n, inp);

   return 0;
}
