class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int n : nums){
            if(n <= min1){
                min1 = n;
            }
            else if(n <= min2){
                min2 = n;
            }
            else{
                return true;
            }
        }
        return false;
    }
};

/*
不斷把前兩個數字壓到越小越好，讓未來的第三個數字更容易出現。
min1 找最小第一階段，min2 找最小第二階段，只要出現一個 n > min2，就代表 min1 < min2 < n，找到 increasing triplet。

Increasing Triplet
        ↓
找 nums[i] < nums[j] < nums[k]
        ↓
不需要真的存三個數
        ↓
維護兩個最小候選值
        ↓
min1 = 最小的第一個數
min2 = 最小的第二個數
        ↓
n <= min1
    → 更新 min1

min1 < n <= min2
    → 更新 min2

n > min2
    → 找到 min1 < min2 < n
    → return true
*/