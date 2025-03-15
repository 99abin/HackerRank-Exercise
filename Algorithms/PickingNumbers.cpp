#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int pickingNumbers(vector<int> a) {
    vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        int count1 = 1, count2 = 1;
        for (int j = i + 1; j < a.size(); j ++) {
            count1 += (a[i] - a[j] == 1 || a[i] - a[j] == 0);
            count2 += (a[i] - a[j] == -1 || a[i] - a[j] == 0);
            if (count1 > count2) {
                result.push_back(count1);
            } else {
                result.push_back(count2);
            }
        }
    }
    sort(result.begin(), result.end());
    return result.back();
}

int main() {
    int size, temp;
    vector<int> list;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        list.push_back(temp);
    }
    
    cout << pickingNumbers(list);
    
    return 0;
}
