/*
Runtime: 0ms
Memory:  14.8MB
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

/*
Runtime: 45ms
Memory:  14MB
*/
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i+1; j < nums.size(); j++){
//                 if(target == (nums[i] + nums[j])){
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };