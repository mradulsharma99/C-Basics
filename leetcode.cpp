// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         nums[5] = [2,9,6,5,4];
        
//         for(int i = 0; i <= 4; i++) {
//             cin >> target;

//         }
        
//     }
// };





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        nums[5] = {2, 9, 6, 5, 4};
        
        vector<int> result;
        
        for(int i = 0; i <= 4; i++) {
            cin >> target;
        }
        
        // Placeholder return statement
        return result;
    }
};

int main() {
    // Example usage
    Solution s;
    vector<int> nums; // Initialize nums with appropriate values
    int target; // Initialize target with appropriate value

    vector<int> output = s.twoSum(nums, target);

    // Print the output or perform other operations with it

    return 0;
}
