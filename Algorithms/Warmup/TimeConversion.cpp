#include <iostream>
#include <string>

using namespace std;

// Function to convert time from 12-hour format to 24-hour format
string timeConversion(string s) {
   // Check if the hour part is less than 12
   if (stoi(s.substr(0, 2)) < 12) {
       // If the time is in AM
       if (s[s.size() - 2] == 'A') {
           return s.substr(0, 8); // Return the time as is (AM case)
       } else {
           // If the time is in PM, convert hour to 24-hour format
           return to_string(stoi(s.substr(0, 2)) + 12) + s.substr(2, 6); // Add 12 to the hour
       }
   } else {
       // If the hour part is 12 or more
       if (s[s.size() - 2] == 'A') {
           // If the time is in AM, convert 12 AM to 00
           return to_string(stoi(s.substr(0, 2)) - 12) + '0' + s.substr(2, 6); // Subtract 12 and add leading zero
       } else {
           // If the time is in PM, return the time as is (24-hour format)
           return s.substr(0, 8); // No change needed for PM case
       }
   }
}

int main() {
   string inp; // Variable to hold the input time string
   cin >> inp; // Read the time input from user
  
   cout << timeConversion(inp); // Output the converted time in 24-hour format
}
