#include <iostream>
#include <vector>

using namespace std;

void plusMinus(vector<int> arr) {
    float pos = 0, neg = 0, zer = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            pos++;
        } else if (arr[i] == 0) {
            zer++;
        } else {
            neg++;
        }
    }
    cout << pos/arr.size() << endl;
    cout << neg/arr.size() << endl;
    cout << zer/arr.size() << endl;
}

int main() {
    int x, temp;
    vector<int> input;
    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> temp;
        input.push_back(temp);
    }
    plusMinus(input);
}



