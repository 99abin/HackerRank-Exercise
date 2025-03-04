#include <iostream>
#include <vector>
using namespace std;


void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
   int app = 0, org = 0;
   for (int i = 0; i < apples.size(); i++) {
       app += (apples[i] + a >= s && apples[i] + a <= t);
   }
   for (int j = 0; j < oranges.size(); j++) {
       org += (oranges[j] + b >= s && oranges[j] + b <= t);
   }
   cout << app << endl;
   cout << org << endl;
}


int main() {
   int s, t, a, b, x, y, temp;
   vector<int> apples, oranges;
   cin >> s >> t >> a >> b >> x >> y;
   for (int i = 0; i < x; i++) {
       cin >> temp;
       apples.push_back(temp);
   }
   for (int j = 0; j < y; j++) {
       cin >> temp;
       oranges.push_back(temp);
   }
   countApplesAndOranges(s, t, a, b, apples, oranges);
}
