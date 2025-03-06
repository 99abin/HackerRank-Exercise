#include <iostream>
#include <vector>
#include <numeric>


using namespace std;


void bonAppetit(vector<int> bill, int k, int b) {
   int sum = accumulate(bill.begin(), bill.end(), 0);
   if (b - (sum - bill[k])/2 != 0) {
     cout << b - (sum - bill[k])/2;
   } else {
     cout << "Bon Appetit";
   }
}


int main() {
   int x, k, temp, a;
   vector<int> inp;
   cin >> x >> k;
   for (int i = 0; i < x; i++) {
       cin >> temp;
       inp.push_back(temp);
   }
   cin >> a;
   bonAppetit(inp, k, a);
}
