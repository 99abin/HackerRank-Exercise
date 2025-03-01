#include <iostream> // Include the iostream library for input and output
#include <vector>   // Include the vector library to use the vector container

using namespace std; // Use the standard namespace

// Function to calculate and print the ratios of positive, negative, and zero elements in the array
void plusMinus(vector<int> arr) {
    float pos = 0, neg = 0, zer = 0; // Initialize counters for positive, negative, and zero elements
    // Loop through each element in the vector
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) { // Check if the element is positive
            pos++; // Increment the positive counter
        } else if (arr[i] == 0) { // Check if the element is zero
            zer++; // Increment the zero counter
        } else { // The element is negative
            neg++; // Increment the negative counter
        }
    }
    // Print the ratio of positive numbers to the total number of elements
    cout << pos/arr.size() << endl;
    // Print the ratio of negative numbers to the total number of elements
    cout << neg/arr.size() << endl;
    // Print the ratio of zero numbers to the total number of elements
    cout << zer/arr.size() << endl;
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
    plusMinus(input); // Call the plusMinus function to calculate and print the ratios
}
