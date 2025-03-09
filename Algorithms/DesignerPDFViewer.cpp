#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    vector<int> greatest;
    vector<char> alph {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < word.size(); i++) {
      auto it = find(alph.begin(), alph.end(), word[i]);
      greatest.push_back(h[distance(alph.begin(), it)]);
    }
    sort(greatest.begin(), greatest.end());
    return word.size() * greatest.back(); 
}

int main() {
    vector<int> height;
    string wrd;
    int temp;
    for (int i = 0; i < 26; i++) {
        cin >> temp;
        height.push_back(temp);
    }
    cin >> wrd;
    
    cout << designerPdfViewer(height, wrd);
}
