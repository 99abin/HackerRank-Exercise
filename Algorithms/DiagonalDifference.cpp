#include <iostream>
#include <vector>


using namespace std;


int diagonalDifference(vector<vector<int>> arr) {
   int sum1 = 0, sum2 = 0;
   for (int i = 0; i < arr.size(); i++) {
       for (int j = 0; j < arr[0].size(); j++) {
          if (j == i) {
           sum1 += arr[i][j];
          }
          if (j == arr[0].size() - 1 - i) {
            sum2 += arr[i][j];
          }
       }
   }
   return abs(sum1 - sum2);
}


int main() {
   int temp, n;
   cin >> n;
   vector<vector<int>> matrix(n, vector<int>(n));
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           cin >> temp;
           matrix[i][j] = temp;
       }
   }
   cout << diagonalDifference(matrix) << endl;
}
