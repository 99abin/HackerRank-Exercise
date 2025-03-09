#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    vector<int> result(queries.size());
    for (int i = 0; i < queries.size(); i++) {
        for (int j = 0; j < stringList.size(); j++) {
            result[i] += (queries[i] == stringList[j]);
        }
    }
    return result;
}

int main() {
    int x, y;
    string temp;
    vector<string> sl, qr;
    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> temp;
        sl.push_back(temp);
    }
    cin >> y;
    for (int j = 0; j < y; j++) {
        cin >> temp;
        qr.push_back(temp);
    }
    
    for (int n : matchingStrings(sl, qr)) {
        cout << n << endl;
    }
}
