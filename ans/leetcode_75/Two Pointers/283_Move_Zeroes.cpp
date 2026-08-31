class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        for(int right = 0; right < nums.size(); right++){
            if(nums[right] != 0){
                swap(nums[right], nums[left]);
                left++;
            }
        }
    }
};

/*
right → 負責掃描整個陣列
left  → 下一個「非 0」應該放的位置
ex. [2, 1, 0, 1]
right = 0 → '2' → 非0 → left++
right = 1 → '1' → 非0 → left++
right = 2 → '0' → 不動
right = 3 → '1' → 非0 → swap
*/