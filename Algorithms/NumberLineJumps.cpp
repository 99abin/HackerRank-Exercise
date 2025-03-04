#include <iostream>
using namespace std;


string kangaroo(int x1, int v1, int x2, int v2) {
   int dif1 = abs(x1 - x2);
   int dif2 = abs((x1 + v1) - (x2 + v2));
   if (dif2 < dif1 && dif1 % (dif1 - dif2) == 0) {
       return "YES";
   } else {
       return "NO";
   }
}


int main() {
   int x1, v1, x2, v2;
   cin >> x1 >> v1 >> x2 >> v2;
  
   cout << kangaroo(x1, v1, x2, v2);
}
