#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int birthdayCakeCandles(vector<int> candles) {
   sort(candles.begin(), candles.end());
   return count(candles.begin(), candles.end(), candles.back());
}


int main() {
   int n, temp;
   cin >> n;
   vector<int> inp;
   for (int i = 0; i < n; i++) {
       cin >> temp;
       inp.push_back(temp);
   }
   cout << birthdayCakeCandles(inp);
}
