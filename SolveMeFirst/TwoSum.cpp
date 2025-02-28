#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Function to solve the sum of two integers using pointers
int solveMeFirst(int* a, int* b) {
    return *a + *b; // Dereference the pointers to get the values and return their sum
}

int main() {
    int num1, num2, sum;
    
    // Read two integers from input
    cin >> num1 >> num2;
    
    // Call the function with the addresses of num1 and num2
    sum = solveMeFirst(&num1, &num2);
    
    // Output the result
    cout << sum;
    
    return 0; // Indicate that the program ended successfully
}
