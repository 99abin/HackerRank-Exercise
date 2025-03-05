#include <iostream>
#include <vector>


using namespace std;


vector<int> breakingRecords(vector<int> scores) {
   vector<int> result = {0, 0};
   int min = scores.front();
   int max = scores.front();
   for (int i = 1; i < scores.size(); i++) {
       if (scores[i] > max) {
         max = scores[i];
         result[0]++;
       } else if (scores[i] < min) {
         min = scores[i];
         result[1]++;
       }
   }
   return result;
}


int main() {
   int game, temp;
   vector<int> point;
   cin >> game;
   for (int i = 0; i < game; i++) {
       cin >> temp;
       point.push_back(temp);
   }
   cout << breakingRecords(point)[0] << " " << breakingRecords(point)[1];
}
