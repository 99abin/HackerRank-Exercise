#include <iostream>
#include <vector>

using namespace std;

int introTutorial(int V, vector<int> arr) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (V == arr[mid]) {
            return mid; 
        } else if (V < arr[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1; 
}

int main() {
    int size, v, temp;
    vector<int> inp;
    cin >> v >> size;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        inp.push_back(temp);
    }
    
    cout << introTutorial(v, inp);
    
    return 0;
}
