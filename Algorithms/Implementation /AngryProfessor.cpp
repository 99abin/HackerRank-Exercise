#include <iostream>
#include <vector>

using namespace std;

// Function to determine if the class is canceled based on student attendance
string angryProfessor(int k, vector<int> a) {
    int count = 0; // Initialize count of students who arrived on time
    // Loop through the arrival times of students
    for (int i = 0; i < a.size(); i++) {
        count += (a[i] <= 0); // Increment count if student arrived on time (arrival time <= 0)
    }
    // Check if the number of students on time is less than the required threshold
    if (count >= k) {
      return "NO"; // Class is not canceled
    } else {
      return "YES"; // Class is canceled
    }
}

int main() {
    int sz, temp, stud, tc; // Declare variables for size, temporary input, student threshold, and test cases
    vector <int> list; // Vector to store arrival times of students
    cin >> tc; // Read the number of test cases
    // Loop through each test case
    for (int i = 0; i < tc; i++) {
        cin >> sz >> stud; // Read the size of the student list and the threshold for attendance
        // Loop to read arrival times of students
        for (int j = 0; j < sz; j++) {
            cin >> temp; // Read each student's arrival time
            list.push_back(temp); // Add the arrival time to the list
        }
        cout << angryProfessor(stud, list) << "\n"; // Call the function and print the result
        list.clear(); // Clear the list for the next test case
    }

    return 0;
}
