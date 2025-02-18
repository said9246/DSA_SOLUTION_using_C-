#include <iostream>
#include <string>  // Include this for string functions
#include <algorithm>  // Include this for max() function

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            string sub = "";  // Store substring
            for (int j = i; j < s.length(); j++) {
                if (sub.find(s[j]) != string::npos) break; // Stop if character repeats
                sub += s[j];  // Add character to substring
                maxLength = max(maxLength, (int)sub.length()); // Update maxLength
            }
        }

        return maxLength;
    }
};

// Driver Code
int main() {
    Solution solution;
    cout << solution.lengthOfLongestSubstring("abcabcbb") << endl; // Output: 3
    return 0;
}

