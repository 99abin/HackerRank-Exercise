#include <iostream>
#include <string>

using namespace std;

int findDigits(int n) {
    int count = 0;
    string div = to_string(n);
    for (int i = 0; i < div.size(); i++) {
        if (div[i] != '0') { 
            count += (n % (div[i] - '0') == 0);
        }
    }
    return count;
}

int main() {
    int temp, test, inp;
    cin >> test;
    for (int i = 0; i < test; i++) {
        cin >> inp;
        
        cout << findDigits(inp) << "\n";
    }
}
