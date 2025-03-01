#include <iostream> // Include the iostream library for input and output
#include <vector>   // Include the vector library to use the vector container
using namespace std; // Use the standard namespace

// Function to calculate the sum of elements in an array
int simpleArraySum(vector<int> ar) {
    int result = 0; // Initialize result to 0
    // Loop through each element in the vector
    for (int i = 0; i < ar.size(); i++) {
        result += ar[i]; // Add the current element to result
    }
    return result; // Return the final sum
}

int main() {
    int x, temp; // Declare variables for the number of elements and temporary storage
    vector<int> input; // Create a vector to store the input numbers
    cin >> x; // Read the number of elements from the user
    // Loop to read x elements from the user
    for (int i = 0; i < x; i++) {
        cin >> temp; // Read a number from the user
        input.push_back(temp); // Add the number to the vector
    }
    // Call the simpleArraySum function and print the result
    cout << simpleArraySum(input) << endl; 
}
