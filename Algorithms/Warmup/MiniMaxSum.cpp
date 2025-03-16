#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// Function to calculate the minimum and maximum sum of four out of five integers
void miniMaxSum(vector<int> arr) {
   // Sort the array to easily access the smallest and largest elements
   sort(arr.begin(), arr.end());
   // Calculate the total sum of all elements in the array
   long sum = accumulate(arr.begin(), arr.end(), 0LL);
   // Calculate the minimum sum by excluding the largest element
   long minsum = sum - arr.back();
   // Calculate the maximum sum by excluding the smallest element
   long maxsum = sum - arr.front();
   // Output the minimum and maximum sums
   cout << minsum << " " << maxsum;
}

int main() {
   vector<int> inp; // Declare a vector to store input integers
   int temp; // Temporary variable to hold each input value
   // Loop to read 5 integers from input
   for (int i = 0; i < 5; i++) {
       cin >> temp; // Read an integer from input
       inp.push_back(temp); // Add the integer to the vector
   }
   miniMaxSum(inp); // Call the function to calculate and print the min and max sums
}
