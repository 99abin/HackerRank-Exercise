#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> permutationEquation(vector<int> p) {
    vector<int> result;
    int in1;
    for (int x = 1; x <= p.size(); x++) {
        auto it = find(p.begin(), p.end(), x);
        in1 = distance(p.begin(), it) + 1;
        auto it2 = find(p.begin(), p.end(), in1);
        result.push_back(distance(p.begin(), it2) + 1);
    }
     return result;
}

int main() {
    int size, temp;
    vector<int> inp;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        inp.push_back(temp);
    }
    
    for (int n : permutationEquation(inp)) {
        cout << n << "\n";
    }
}
