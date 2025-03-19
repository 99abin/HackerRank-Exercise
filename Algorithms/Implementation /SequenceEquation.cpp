#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the permutation equation results
vector<int> permutationEquation(vector<int> p) {
    vector<int> result; // Vector to store the results of the permutation equation
    int in1; // Variable to hold the intermediate index value
    // Loop through each number from 1 to the size of the input vector
    for (int x = 1; x <= p.size(); x++) {
        // Find the position of x in the vector p
        auto it = find(p.begin(), p.end(), x);
        // Calculate the 1-based index of x in p
        in1 = distance(p.begin(), it) + 1;
        // Find the position of in1 in the vector p
        auto it2 = find(p.begin(), p.end(), in1);
        // Calculate the 1-based index of in1 in p and add it to the result vector
        result.push_back(distance(p.begin(), it2) + 1);
    }
    return result; // Return the final result vector
}

int main() {
    int size, temp; // Variables to hold the size of the input and temporary values
    vector<int> inp; // Vector to store the input values
    cin >> size; // Read the size of the input vector
    // Loop to read the input values into the vector
    for (int i = 0; i < size; i++) {
        cin >> temp; // Read a temporary value
        inp.push_back(temp); // Add the temporary value to the input vector
    }
    
    // Call the permutationEquation function and print each result on a new line
    for (int n : permutationEquation(inp)) {
        cout << n << "\n"; // Output the result
    }
}
