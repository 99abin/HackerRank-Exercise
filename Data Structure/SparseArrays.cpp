#include <iostream> // Include the iostream library for input and output
#include <string>   // Include the string library to use string data type
#include <vector>   // Include the vector library to use the vector container

using namespace std; // Use the standard namespace to avoid prefixing std::

// Function to count occurrences of each query string in the string list
vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    vector<int> result(queries.size()); // Create a result vector initialized to zero with the size of queries
    // Loop through each query string
    for (int i = 0; i < queries.size(); i++) {
        // Loop through each string in the string list
        for (int j = 0; j < stringList.size(); j++) {
            // Increment the count in result[i] if the query matches the string in the list
            result[i] += (queries[i] == stringList[j]);
        }
    }
    return result; // Return the vector containing counts of matches for each query
}

int main() {
    int x, y; // Declare variables for the number of strings and queries
    string temp; // Temporary variable for input
    vector<string> sl, qr; // Vectors to hold the string list and query list
    cin >> x; // Read the number of strings
    // Loop to read strings into the string list
    for (int i = 0; i < x; i++) {
        cin >> temp; // Read a temporary string from user input
        sl.push_back(temp); // Add the temporary string to the string list
    }
    cin >> y; // Read the number of queries
    // Loop to read queries into the query list
    for (int j = 0; j < y; j++) {
        cin >> temp; // Read a temporary query from user input
        qr.push_back(temp); // Add the temporary query to the query list
    }
    
    // Loop to print the count of matches for each query
    for (int n : matchingStrings(sl, qr)) {
        cout << n << endl; // Print each count on a new line
    }
}
