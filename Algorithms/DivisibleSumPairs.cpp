#include <iostream>
#include <vector>


using namespace std;


int divisibleSumPairs(int n, int k, vector<int> ar) {
   int result = 0;
   for (int i = 0; i < ar.size(); i++) {
       for (int j = i+1; j < ar.size(); j++) {
           result += ((ar[i] + ar[j]) % k == 0);
       }
   }
   return result;
}


int main() {
   int n, k, temp;
   vector<int> inp;
   cin >> n >> k;
   for (int i = 0; i < n; i++) {
       cin >> temp;
       inp.push_back(temp);
   }
   cout << divisibleSumPairs(n, k, inp);
}
