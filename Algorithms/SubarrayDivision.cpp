#include <iostream>
#include <vector>
using namespace std;

// Function to count the number of ways to share chocolate
int birthday(vector<int> s, int d, int m) {
   int sum = 0; // Variable to hold the current sum of the segment
   int result = 0; // Variable to count the number of valid segments
   int i = 0, j = 0; // Indices for the current segment

   // Loop through the chocolate pieces
   while (j < s.size()) {
       sum += s[j]; // Add the current piece to the sum
       
       // Check if we have a complete segment of size m
       if (i == m - 1) {
           // If the sum of the segment equals d, increment the result
           result += (sum == d);
           // Remove the first piece of the segment from the sum
           sum -= s[j - m + 1];
           i -= 1; // Decrease the segment size counter
       }
       i++; // Increase the segment size counter
       j++; // Move to the next chocolate piece
   }
   return result; // Return the total number of valid segments
}

int main() {
   int n, temp, d, m; // Variables for the number of pieces, temporary input, desired sum, and segment length
   vector<int> inp; // Vector to store the chocolate pieces
   cin >> n; // Read the number of chocolate pieces
   for (int i = 0; i < n; i++) {
       cin >> temp; // Read each chocolate piece
       inp.push_back(temp); // Add the piece to the vector
   }
   cin >> d >> m; // Read the desired sum and the segment length
  
   cout << birthday(inp, d, m); // Output the number of ways to share the chocolate
}
