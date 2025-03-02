#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int reverseArray(vector<int>& nums, int target) {  // Change void to int
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            if (nums[i] == target) {
                return i;  // Return the target if found
            }
        }
        return -1;  // Return -1 if the target is not found
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    cout << "Original Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    Solution sol;
    int found = sol.reverseArray(nums, target);  // Capture return value

    cout << "Target Found: " << found << endl;  // Print result

    return 0;
}

