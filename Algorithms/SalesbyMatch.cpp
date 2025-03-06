#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
   sort(ar.begin(), ar.end());
   int pair = 0, count = 1;
   for (int i = 1; i < ar.size(); i++) {
       if (ar[i] == ar[i-1]) {
           count++;
       } else {
           count = 1;
       }
       if (count == 2) {
           pair++;
           count = 0;
       }
   }
   return pair;
}


int main() {
   int n, temp;
   vector<int> inp;
   cin >> n;
   for (int i = 0; i < n; i++) {
       cin >> temp;
       inp.push_back(temp);
   }
   cout << sockMerchant(n, inp);
}
