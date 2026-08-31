class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = *max_element(candies.begin(), candies.end());

        vector<bool> result(candies.size());

        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= max_candies){
                result[i] = true;
            }
            else{
                result[i] = false;
            }
        }
        return result;
    }
};

/*std::max_element 是 C++ 標準模板庫（STL）中的一個演算法，用於尋找指定範圍內的最大元素，並回傳指向該元素的迭代器。*/