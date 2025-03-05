#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int addOne(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};



int main() {
    vector<int> nums ={4,1,2,1,2,8};
    
    
     cout << "Original  Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    

    Solution sol;
//    vector<int> result = sol.addOne(nums);  
    int result = sol.addOne(nums);  
    
    
cout << "Updated Array: " << result << endl;

//    cout << "Updated Array: ";
//    for (int num : result) {
//        cout << num << " ";
//    }
    cout << endl;

    return 0;
}

