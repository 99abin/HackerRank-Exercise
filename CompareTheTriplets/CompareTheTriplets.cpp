#include <iostream>
#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> result = {0,0};
    for (int i = 0; i < 3; i++) {
        result[0] += a[i] > b[i];
        result[1] += a[i] < b[i];
    }
    return result;
}

int main(){
    vector<int> alice;
    vector<int> bob;
    int temp;
    for (int i = 0; i < 3; i++) {
        cin >> temp;
        alice.push_back(temp);
    }
    for (int j = 0; j < 3; j++) {
        cin >> temp;
        bob.push_back(temp);
    }
    vector<int> result = compareTriplets(alice, bob);
    cout << result[0] << " "; 
    cout << result[1];
}
