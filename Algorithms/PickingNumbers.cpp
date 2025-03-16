#include <iostream>
#include <vector>

using namespace std;

int pickingNumbers(vector<int> a) {
    int greatest = 0, result;
    for (int i = 0; i < a.size(); i++) {
        int count1 = 1, count2 = 1;
        for (int j = i + 1; j < a.size(); j ++) {
            count1 += (a[i] - a[j] == 1 || a[i] - a[j] == 0);
            count2 += (a[i] - a[j] == -1 || a[i] - a[j] == 0);
            if (count1 >= count2 && count1 > greatest) {
                result = count1;
                greatest = count1;
            } else if (count2 > count1 && count2 > greatest) {
                result = count2;
                greatest = count2;
            }
        }
    }
    return result;
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
