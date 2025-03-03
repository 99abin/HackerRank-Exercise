#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>


using namespace std;


void miniMaxSum(vector<int> arr) {
   sort(arr.begin(), arr.end());
   long sum = accumulate(arr.begin(), arr.end(), 0LL);
   long minsum = sum - arr.back();
   long maxsum = sum - arr.front();
   cout << minsum << " " << maxsum;
}


int main() {
   vector<int> inp;
   int temp;
   for (int i = 0; i < 5; i++) {
       cin >> temp;
       inp.push_back(temp);
   }
   miniMaxSum(inp);
}
