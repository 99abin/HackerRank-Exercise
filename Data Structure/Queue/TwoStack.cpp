#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void twoStack(vector<string> queue) {
    string temp;
    vector<int> result;
    for (int i = 0; i < queue.size(); i++) {
        temp = queue[i];
        switch (temp[0]) {
            case '1':
            result.push_back(stoi(temp.substr(2, temp.size() - 2)));
            break; 
            case '2':
            result.erase(result.begin());
            break;
            case '3':
            cout << result[0] << "\n";
            break;
        } 
    }
    
}

int main() {
    int size;
    cin >> size;
    vector<string> q(size + 1);
    for (int i = 0; i <= size; i++) {
        getline(cin, q[i]);
        //cout << q[i] << "\n";
    }
    
    twoStack(q);
    return 0;
}


