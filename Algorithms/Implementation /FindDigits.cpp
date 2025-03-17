#include <iostream>
#include <string>

using namespace std;

// Function to find the number of digits in 'n' that divide 'n' evenly
int findDigits(int n) {
    int count = 0; // Initialize count of divisible digits to 0
    string div = to_string(n); // Convert the integer 'n' to a string for digit extraction
    // Loop through each character in the string representation of 'n'
    for (int i = 0; i < div.size(); i++) {
        // Check if the digit is not zero to avoid division by zero
        if (div[i] != '0') { 
            // Check if the digit divides 'n' evenly and increment count if true
            count += (n % (div[i] - '0') == 0);
        }
    }
    return count; // Return the total count of divisible digits
}

int main() {
    int temp, test, inp; // Declare variables for input
    cin >> test; // Read the number of test cases
    // Loop through each test case
    for (int i = 0; i < test; i++) {
        cin >> inp; // Read the integer input for the current test case
        
        cout << findDigits(inp) << "\n"; // Output the count of divisible digits for the input
    }
}
