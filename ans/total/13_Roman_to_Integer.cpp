class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10}, 
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        for(int i=0; i<s.size()-1; i++){
            if (roman[s[i]] >= roman[s[i+1]])
            {
                result+=roman[s[i]];
            }
            else{
                result-=roman[s[i]];
            }
        }
        return result + roman[s[s.size()-1]];
    }
};
/*
這題先記錄羅馬字母的數值，然後看第一和第二位數是descending order還是ascending order，
如果是descending order則直接加第一位數，   //第二位不影響第一位數值 XI => 10 + 1
如果是ascending order則減掉，             //第二位受第一位影響     IX =>  9
ex. XIV
X(10) -> I(1) => descending order (+10)
I(1)  -> V(5) => ascending order  ( -1)

*/