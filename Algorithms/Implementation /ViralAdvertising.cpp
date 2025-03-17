#include <iostream>
#include <cmath>

using namespace std;

int viralAdvertising(int n) {
    int likes = 0, shared = 5, like;
    for (int i = 0; i < n; i++) {
        like = floor(shared/2);
        likes += like;
        shared = like * 3;
    }
    
    return likes;
}

int main() {
    int day;
    cin >> day;
    
    cout << viralAdvertising(day);
}
