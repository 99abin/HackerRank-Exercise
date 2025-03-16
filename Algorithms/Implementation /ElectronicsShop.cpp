#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
 vector<int> spent;
 int greatest;
 sort(keyboards.begin(), keyboards.end());
 sort(drives.begin(), drives.end());
 if (keyboards.front() + drives.front() > b) {
   return -1;
 }
 for (int i = 0; i < keyboards.size(); i++) {
   for (int j = 0; j < drives.size(); j++) {
     spent.push_back(keyboards[i] + drives[j]);
   }
 }
 sort(spent.begin(), spent.end(), greater<int>());
 for (int n : spent) {
   if (n <= b) {
     greatest = n;
     break;
   }
 }
 return greatest;
}


int main()
{
   int b, k, d, temp;
   vector<int> keyb, drv;
   cin >> b >> k >> d;
   for (int i = 0; i < k; i++) {
     cin >> temp;
     keyb.push_back(temp);
   }
   for (int j = 0; j < d; j++) {
     cin >> temp;
     drv.push_back(temp);
   }
  
   cout << getMoneySpent(keyb, drv, b);
}
