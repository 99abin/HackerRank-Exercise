#include <iostream>
#include <string>


using namespace std;


int countingValleys(int steps, string path) {
   int level = 0, vall = 0;
   for (int i = 0; i < steps; i++) {
       if (path[i] == 'U') {
           level++;
       } else {
           level--;
       }
       vall += (level == 0 && path[i] == 'U');
   }
   return vall;
}




int main() {
  int n;
  char temp;
  string inp;
  cin >> n;
  for (int i = 0; i < n; i++) {
      cin >> temp;
      inp += temp;
  }
   cout << countingValleys(n, inp);
}
