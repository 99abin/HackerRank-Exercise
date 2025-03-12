#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void getMax (vector<string> operations) {
  string temp;
  vector<int> result, stack;
  for (int i = 0; i < operations.size(); i++) {
    temp = operations[i];
    switch (temp[0]) {
      case '1':
      stack.push_back(stoi(temp.substr(2, temp.size() - 2)));
      break;
      case '2':
      stack.pop_back();
      break;
      case '3':
      auto it = max_element(stack.begin(), stack.end());
      cout << stack[distance(stack.begin(), it)] << "\n";
      break;
    } 
  }
}

int main() 
{
    int size, temp;
    cin >> size;
    vector<string> stack(size + 1);
    for (int i = 0; i < size + 1; i++) {
      getline(cin, stack[i]);
    }
    
    getMax(stack);
    
    return 0;
}
