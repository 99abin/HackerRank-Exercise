#include <iostream>
#include <vector>

using namespace std;

string angryProfessor(int k, vector<int> a) {
    int count = 0;
    for (int i = 0; i < a.size(); i++) {
        count += (a[i] <= 0);
    }
    if (count >= k) {
      return "NO";
    } else {
      return "YES";
    }
}

int main() {
    int sz, temp, stud, tc;
    vector <int> list;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        cin >> sz >> stud;
        for (int j = 0; j < sz; j++) {
            cin >> temp;
            list.push_back(temp);
        }
        cout << angryProfessor(stud, list) << "\n";
        list.clear();
    }
}
