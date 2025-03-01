#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& nums) {
        int len = nums.size();
        for (int i = 0; i < len / 2; i++) {
            swap(nums[i], nums[len - i - 1]); // Swap elements
        }
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    cout << "Original Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    Solution sol;
    sol.reverseArray(nums); // Call the function

    cout << "Reversed Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

