#include <iostream>
#include <string>

using namespace std;

// Function to determine which cat will catch the mouse or if the mouse escapes
string catAndMouse(int x, int y, int z) {
   // Check if Cat A (at position x) is farther from the mouse (at position z) than Cat B (at position y)
   if (abs(x - z) > abs(y - z)) {
       return "Cat B"; // Cat B is closer to the mouse
   } 
   // Check if Cat A is closer to the mouse than Cat B
   else if (abs(x - z) < abs(y - z)) {
       return "Cat A"; // Cat A is closer to the mouse
   } 
   // If both cats are equidistant from the mouse
   else {
       return "Mouse C"; // The mouse escapes as both cats are equally far
   }
}

int main() {
   int q, x, y, z; // Variables to hold the number of queries and positions of the cats and mouse
   cin >> q; // Read the number of queries
   // Loop through each query
   for (int i = 0; i < q; i++) {
        cin >> x; // Read the position of Cat A
        cin >> y; // Read the position of Cat B
        cin >> z; // Read the position of the Mouse
        cout << catAndMouse(x, y, z) << endl; // Call the function and print the result
    }
}
