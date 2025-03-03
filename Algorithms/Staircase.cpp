#include <iostream>
using namespace std;


void staircase(int n) {
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           if (j < n-1-i) {
               cout << " ";
           } else {
               cout << "#";
           }
       }
       cout << "" << endl;
   }
}


int main() {
   int inp;
   cin >> inp;
   staircase(inp);
}
