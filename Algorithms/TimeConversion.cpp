#include <iostream>
#include <string>

using namespace std;

string timeConversion(string s) {
   if (stoi(s.substr(0, 2)) < 12) {
       if (s[s.size() - 2] == 'A') {
           return s.substr(0, 8);
       } else {
           return to_string(stoi(s.substr(0, 2)) + 12) + s.substr(2, 6);
       }
   } else {
       if (s[s.size() - 2] == 'A') {
           return to_string(stoi(s.substr(0, 2)) - 12) + '0' + s.substr(2, 6);
       } else {
           return s.substr(0, 8);
       }
   }
}


int main() {
   string inp;
   cin >> inp;
  
   cout << timeConversion(inp);
}
