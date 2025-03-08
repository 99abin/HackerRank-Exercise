#include <iostream>
#include <vector>

using namespace std;

// Function to determine the number of times the highest and lowest scores are broken
vector<int> breakingRecords(vector<int> scores) {
   // Initialize a result vector to store the count of broken records: [maxCount, minCount]
   vector<int> result = {0, 0};
   int min = scores.front(); // Initialize min with the first score
   int max = scores.front(); // Initialize max with the first score

   // Loop through the scores starting from the second score
   for (int i = 1; i < scores.size(); i++) {
       // If the current score is greater than the current max, update max and increment maxCount
       if (scores[i] > max) {
         max = scores[i];
         result[0]++;
       } 
       // If the current score is less than the current min, update min and increment minCount
       else if (scores[i] < min) {
         min = scores[i];
         result[1]++;
       }
   }
   // Return the result vector containing counts of broken max and min records
   return result;
}

int main() {
   int game, temp; // Declare variables for the number of games and temporary storage for input
   vector<int> point; // Vector to store the scores of the games
   cin >> game; // Read the number of games

   // Read the scores for each game and store them in the point vector
   for (int i = 0; i < game; i++) {
       cin >> temp;
       point.push_back(temp);
   }

   // Call the function to get the counts of broken records and print them
   // Output the number of times the max and min records were broken
   cout << breakingRecords(point)[0] << " " << breakingRecords(point)[1];
}
