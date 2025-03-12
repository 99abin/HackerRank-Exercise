#include <iostream> // Include the iostream library for input and output
#include <vector>   // Include the vector library to use the vector container
#include <string>   // Include the string library to use string data type
#include <algorithm> // Include the algorithm library for using max_element function

using namespace std; // Use the standard namespace to avoid prefixing std::

// Function to perform operations on a stack and get the maximum element
void getMax(vector<string> operations) {
    string temp; // Temporary variable to hold the current operation
    vector<int> result, stack; // Vectors to hold results and the stack
    // Loop through each operation
    for (int i = 0; i < operations.size(); i++) {
        temp = operations[i]; // Get the current operation
        switch (temp[0]) { // Check the first character to determine the operation type
            case '1': // Push operation
                // Convert the substring to an integer and push it onto the stack
                stack.push_back(stoi(temp.substr(2, temp.size() - 2)));
                break;
            case '2': // Pop operation
                // Remove the last element from the stack
                if (!stack.empty()) { // Check if the stack is not empty before popping
                    stack.pop_back();
                }
                break;
            case '3': // Get maximum operation
                // Find the maximum element in the stack and print it
                if (!stack.empty()) { // Check if the stack is not empty before finding max
                    auto it = max_element(stack.begin(), stack.end()); // Get iterator to the max element
                    cout << *it << "\n"; // Dereference the iterator to print the max value
                }
                break;
        } 
    }
}

int main() {
    int size; // Variable to hold the number of operations
    cin >> size; // Read the number of operations from user input
    cin.ignore(); // Ignore the newline character after reading size
    vector<string> stack(size); // Create a vector to hold the operations
    // Loop to read each operation from user input
    for (int i = 0; i < size; i++) {
        getline(cin, stack[i]); // Read the entire line for each operation
    }
    
    getMax(stack); // Call the function to process the operations and get max values
    
    return 0; // Return 0 to indicate successful execution
}
