#include <iostream>
using namespace std;

// Function to determine if two kangaroos will land on the same position
string kangaroo(int x1, int v1, int x2, int v2) {
   // Calculate the absolute difference in starting positions
   int dif1 = abs(x1 - x2);
   // Calculate the absolute difference in positions after one jump
   int dif2 = abs((x1 + v1) - (x2 + v2));
   // Check if the second difference is less than the first and if they can meet
   if (dif2 < dif1 && dif1 % (dif1 - dif2) == 0) {
       return "YES"; // They will meet
   } else {
       return "NO"; // They will not meet
   }
}

int main() {
   int x1, v1, x2, v2; // Declare variables for starting positions and velocities
   cin >> x1 >> v1 >> x2 >> v2; // Input the values for the two kangaroos
  
   cout << kangaroo(x1, v1, x2, v2); // Output the result of the kangaroo function
}
