#include <iostream>
#include <vector>


using namespace std;


vector<int> gradingStudents(vector<int> grades) {
   vector<int> output;
   for (int i = 0; i < grades.size(); i++) {
       if (grades[i] >= 38 && grades[i] % 5 > 2 ) {
           output.push_back(grades[i] += (5 - grades[i] % 5));
       } else {
           output.push_back(grades[i]);
       }
   }
   return output;
}


int main() {
   vector<int> inp, result;
   int x, temp;
   cin >> x;
   for (int i = 0; i < x; i++) {
       cin >> temp;
       inp.push_back(temp);
   }
   result = gradingStudents(inp);
   for (int j = 0; j < result.size(); j++) {
       cout << result[j] << endl;
   }
}
