#include <iostream>
#include <string>


using namespace std;


string catAndMouse(int x, int y, int z) {
   if (abs(x - z) > abs(y - z)) {
       return "Cat B";
   } else if (abs(x - z) < abs(y - z)) {
       return "Cat A";
   } else {
       return "Mouse C";
   }
}


int main() {
   int q, x, y, z;
   cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        cin >> y;
        cin >> z;
        cout << catAndMouse(x, y, z) << endl;
    }
}

