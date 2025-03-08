#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to count the number of tallest birthday cake candles
int birthdayCakeCandles(vector<int> candles) {
   // Sort the candles to find the tallest ones
   sort(candles.begin(), candles.end());
   // Count and return the number of candles that have the maximum height (last element in the sorted vector)
   return count(candles.begin(), candles.end(), candles.back());
}

int main() {
   int n, temp; // Declare variables for the number of candles and temporary storage for input
   cin >> n; // Read the number of candles
   vector<int> inp; // Vector to store the heights of the candles

   // Read the heights of each candle and store them in the inp vector
   for (int i = 0; i < n; i++) {
       cin >> temp;
       inp.push_back(temp);
   }

   // Call the function to count the tallest candles and print the result
   cout << birthdayCakeCandles(inp);
}
