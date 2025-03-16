#include <iostream>
#include <cmath>
using namespace std;


int pageCount(int n, int p) {
 int tleap, fleap, bleap;
 tleap = ceil((n-1)/2.0);
 fleap = ceil((p-1)/2.0);
 bleap = tleap - fleap;
 if (fleap <= bleap) {
   return fleap;
 } else {
   return bleap;
 }
}


int main()
{
   int n, p;
   cin >> n >> p;
   cout << pageCount(n, p);
}
