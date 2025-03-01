#include <iostream>
#include <vector>
using namespace std;

int simpleArraySum(vector<int> ar) {
    int result = 0;
    for (int i = 0; i < ar.size(); i++) {
        result += ar[i];
    }
    return result;
}

int main(){
    int x, temp;
    vector<int> input;
    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> temp;
        input.push_back(temp);
    }
    cout << simpleArraySum(input) << endl;
}
