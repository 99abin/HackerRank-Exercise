#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the total number of likes received after 'n' days of viral advertising
int viralAdvertising(int n) {
    int likes = 0; // Initialize total likes to 0
    int shared = 5; // Initial number of people the advertisement is shared with
    int like; // Variable to store likes received each day

    // Loop through each day of the advertising campaign
    for (int i = 0; i < n; i++) {
        like = floor(shared / 2); // Calculate likes as half of the shared count
        likes += like; // Add today's likes to the total likes
        shared = like * 3; // Update the shared count for the next day
    }
    
    return likes; // Return the total number of likes
}

int main() {
    int day; // Variable to store the number of days
    cin >> day; // Read the number of days from user input
    
    cout << viralAdvertising(day); // Output the total likes received after 'day' days
}
