#include <iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        while (true) {
            if (s.find("()") != string::npos) {
                s.replace(s.find("()"), 2, "");
            }
            else if (s.find("{}") != string::npos) {
                s.replace(s.find("{}"), 2, "");
            }
            else if (s.find("[]") != string::npos) {
                s.replace(s.find("[]"), 2, "");
            }
            else {
                return s.empty();
            }
        }
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;
    cout << (sol.isValid(s) ? "Valid" : "Invalid") << endl;
    return 0;
}

