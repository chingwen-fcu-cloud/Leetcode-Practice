class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        int curr = 1;
        for(int i = 0; i < n; i++){
            res[i] *= curr;
            curr *= nums[i];
        }
        curr = 1;
        for(int i = n-1; i >= 0; i--){
            res[i] *= curr;
            curr *= nums[i];
        }
        return res;
    }
};

/*
ans[i] = 左邊所有元素的乘積 × 右邊所有元素的乘積

Brute Force
    ↓
O(n²)

全部乘起來 / division
    ↓
O(n)
但有 0，而且題目禁止 division

Prefix + Suffix
    ↓
O(n)
但 O(n) auxiliary space

直接把 Prefix / Suffix 放進 ans
    ↓
O(n)
O(1) auxiliary space
    ↓
最佳解
*/