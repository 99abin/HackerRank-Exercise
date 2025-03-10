#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to determine the number of doses needed to clear the hurdle race
int hurdleRace(int k, vector<int> height) {
    // Sort the heights of the hurdles in ascending order
    sort(height.begin(), height.end());
    
    // Check if the maximum height of the hurdles is less than or equal to k
    if (height.back() <= k) {
        return 0; // No doses needed if k is sufficient
    } else {
        // Return the number of doses needed to jump over the highest hurdle
        return height.back() - k;
    }
}

int main() {
    vector<int> inp; // Vector to store the heights of the hurdles
    int size, k, temp; // Variables to hold the number of hurdles, maximum jump height, and temporary input
    cin >> size >> k; // Read the number of hurdles and the maximum jump height
    for (int i = 0; i < size; i++) {
        cin >> temp; // Read each hurdle height
        inp.push_back(temp); // Add the height to the vector
    }
    
    cout << hurdleRace(k, inp); // Output the number of doses needed to clear the hurdles
}
