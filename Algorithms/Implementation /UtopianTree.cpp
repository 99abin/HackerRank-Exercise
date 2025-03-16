#include <iostream>

using namespace std;

// Function to calculate the height of the Utopian Tree after n growth cycles
int utopianTree(int n) {
    int height = 1; // Initialize the height of the tree to 1 meter
    // Loop through each growth cycle from 1 to n
    for (int i = 1; i <= n; i++) {
        // Check if the current cycle is even (summer)
        if (i % 2 == 0) {
            height += 1; // Increase height by 1 meter during summer
        } else {
            height *= 2; // Double the height during spring
        }
    }
    return height; // Return the final height of the tree
}

int main() {
    int tc, temp; // Variables for the number of test cases and temporary input
    cin >> tc; // Read the number of test cases
    // Loop through each test case
    for (int i = 0; i < tc; i++) {
        cin >> temp; // Read the number of growth cycles for the current test case
        cout << utopianTree(temp) << endl; // Output the height of the tree after the given cycles
    }  
}
