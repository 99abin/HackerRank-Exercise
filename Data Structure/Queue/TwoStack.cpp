#include <iostream> // Include the iostream library for input and output
#include <vector>   // Include the vector library to use the vector container
#include <string>   // Include the string library to use string data type
#include <algorithm> // Include the algorithm library for various algorithms
using namespace std; // Use the standard namespace to avoid prefixing std::

void twoStack(vector<string> queue) { // Function to process operations on a stack using a queue representation
    string temp; // Temporary variable to hold the current operation
    vector<int> result; // Vector to hold the results of the operations
    for (int i = 0; i < queue.size(); i++) { // Loop through each operation in the queue
        temp = queue[i]; // Get the current operation
        switch (temp[0]) { // Check the first character to determine the operation type
            case '1': // Push operation
            // Convert the substring to an integer and push it onto the result vector
            result.push_back(stoi(temp.substr(2, temp.size() - 2)));
            break; 
            case '2': // Pop operation
            // Remove the first element from the result vector
            result.erase(result.begin());
            break;
            case '3': // Print operation
            // Print the first element of the result vector
            cout << result[0] << "\n";
            break;
        } 
    }
    
}

int main() {
    int size; // Variable to hold the number of operations
    cin >> size; // Read the number of operations from user input
    vector<string> q(size + 1); // Create a vector to hold the operations
    for (int i = 0; i <= size; i++) { // Loop to read each operation from user input
        getline(cin, q[i]); // Read a line of input into the vector
        //cout << q[i] << "\n"; // Optional: Print each operation to verify input
    }
    
    twoStack(q); // Call the function to process the operations
    return 0; // Return 0 to indicate successful execution
}
