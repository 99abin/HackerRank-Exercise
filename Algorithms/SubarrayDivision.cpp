#include <iostream>
#include <vector>
using namespace std;


int birthday(vector<int> s, int d, int m) {
   int sum = 0, result = 0, i = 0, j = 0;
   while (j < s.size()) {
       sum += s[j];
       if (i == m-1) {
           result += (sum == d);
           sum -= s[j-m+1];
           i -= 1;
       }
       i++;
       j++;
   }
   return result;
}


int main() {
   int n, temp, d, m;
   vector<int> inp;
   cin >> n;
   for (int i = 0; i < n; i++) {
       cin >> temp;
       inp.push_back(temp);
   }
   cin >> d >> m;
  
   cout << birthday(inp, d, m);
}
