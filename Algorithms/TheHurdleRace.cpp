#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int hurdleRace(int k, vector<int> height) {
    sort(height.begin(), height.end());
    if (height.back() <= k) {
        return 0;
    } else {
        return height.back() - k;
    }
}

int main() {
    vector<int> inp;
    int size, k, temp;
    cin >> size >> k;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        inp.push_back(temp);
    }
    
    cout << hurdleRace(k, inp);
}
