#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> addOne(vector<int>& nums) {  
        int len = nums.size();
        for (int i = len - 1; i >= 0; i--) {  // Correct loop condition
            if (nums[i] < 9) {  
                nums[i]++;  // Increment last non-9 element
                return nums;  // Return the updated vector
            }
            nums[i] = 0;  // If it's 9, set it to 0
        }
        
        // If all digits were 9, add a new digit at the beginning
        nums.insert(nums.begin(), 1);
        return nums;
    }
};

int main() {
    vector<int> nums = {1, 3, 9};  // Example case

    Solution sol;
    vector<int> result = sol.addOne(nums);  // Call function

    cout << "Updated Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

