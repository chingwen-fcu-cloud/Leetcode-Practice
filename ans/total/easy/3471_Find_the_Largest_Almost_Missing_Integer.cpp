class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n ;i++){
            mp[nums[i]]++;
        }
        int res = -1;
        for(int j = 0; j < n; j++){
            if(k == n || (mp[nums[j]] == 1 && (k == 1 || j == 0 || j == n-1))){
                res = max(res, nums[j]);
            }
        }
        return res;
    }
};

/*                
    nums[j]
       │
       ▼
  出現次數是否為 1？
       │
 ┌─────┴─────┐
 │           │
No          Yes
 │           │
排除       能不能只出現
          在一個 subarray？
               │
        ┌──────┴──────┐
        │             │
      k == 1        k < n
        │             │
      可以        必須在兩端
*/