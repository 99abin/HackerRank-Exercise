#include <iostream>
#include <vector>
#include <numeric>


using namespace std;


long aVeryBigSum(vector<long> ar) {
   return accumulate(ar.begin(), ar.end(), 0L);
}


int main() {
   vector<long> inp;
   int n, temp;
   cin >> n;
   for (int i = 0; i < n; i++) {
       cin >> temp;
       inp.push_back(temp);
   }
   cout << aVeryBigSum(inp);
}
