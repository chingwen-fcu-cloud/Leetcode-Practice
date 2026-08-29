class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=1; i<=n; i++){
            ans[i] = ans[i >> 1] + (i & 1);
        }
        return ans;
    }
};
/*
1. DP：利用之前算好的答案
2. i >> 1：相當於 i / 2
3. i & 1：判斷 i 是奇數還是偶數
時間複雜度：O(n)
空間複雜度：O(n)
*/