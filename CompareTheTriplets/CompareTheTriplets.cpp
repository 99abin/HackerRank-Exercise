#include <iostream> // Include the iostream library for input and output
#include <vector>   // Include the vector library to use the vector container

using namespace std; // Use the standard namespace

// Function to compare two triplets and return the scores
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> result = {0, 0}; // Initialize a result vector to store scores for Alice and Bob
    // Loop through the three elements of the triplets
    for (int i = 0; i < 3; i++) {
        result[0] += a[i] > b[i]; // Increment Alice's score if her score is greater than Bob's
        result[1] += a[i] < b[i]; // Increment Bob's score if his score is greater than Alice's
    }
    return result; // Return the result vector containing the scores
}

int main() {
    vector<int> alice; // Create a vector to store Alice's scores
    vector<int> bob;   // Create a vector to store Bob's scores
    int temp; // Temporary variable to hold input scores
    // Loop to read Alice's scores
    for (int i = 0; i < 3; i++) {
        cin >> temp; // Read a score from the user
        alice.push_back(temp); // Add the score to Alice's vector
    }
    // Loop to read Bob's scores
    for (int j = 0; j < 3; j++) {
        cin >> temp; // Read a score from the user
        bob.push_back(temp); // Add the score to Bob's vector
    }
    vector<int> result = compareTriplets(alice, bob); // Call the compareTriplets function to get the scores
    cout << result[0] << " "; // Print Alice's score
    cout << result[1]; // Print Bob's score
}
