#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Function to calculate the sum of a vector of long integers
long aVeryBigSum(vector<long> ar) {
   // Use accumulate to sum all elements in the vector, starting from 0L
   return accumulate(ar.begin(), ar.end(), 0L);
}

int main() {
   vector<long> inp; // Vector to store input numbers
   int n, temp; // Variables to hold the number of elements and temporary input
   cin >> n; // Read the number of elements
   for (int i = 0; i < n; i++) {
       cin >> temp; // Read each element
       inp.push_back(temp); // Add the element to the vector
   }
   cout << aVeryBigSum(inp); // Output the sum of the elements in the vector
}
