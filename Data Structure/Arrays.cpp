#include <iostream> // Include the iostream library for input and output
#include <vector>   // Include the vector library to use the vector container

using namespace std; // Use the standard namespace to avoid prefixing std::

// Function to reverse an array
vector<int> reverseArray(vector<int> a) {
   vector<int> result; // Create an empty vector to store the reversed elements
   // Loop through the input vector from the last element to the first
   for (int i = a.size() - 1; i >= 0; i--) {
       result.push_back(a[i]); // Add each element to the result vector
   }
   return result; // Return the reversed vector
}

int main() {
   int size, temp; // Declare variables for the size of the array and a temporary variable for input
   cin >> size; // Read the size of the array from user input
   vector<int> arr; // Create a vector to hold the input elements
   // Loop to read elements into the vector
   for (int i = 0; i < size; i++) {
       cin >> temp; // Read a temporary value from user input
       arr.push_back(temp); // Add the temporary value to the vector
   }
  
   // Loop to print the reversed array
   for (int j = 0; j < arr.size(); j++) {
       cout << reverseArray(arr)[j] << " "; // Call reverseArray and print each element of the reversed vector
   }
}
