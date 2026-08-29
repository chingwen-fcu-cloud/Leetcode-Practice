class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 == str2 + str1){
            return str1.substr(0, gcd(str1.size(), str2.size()));
        }
        return "";
    }
};

/*
先用 str1 + str2 == str2 + str1 判斷兩個字串是否具有共同週期，再用「字串長度的 GCD」找出最大共同基礎字串。
+ 判斷「有沒有共同規律」 → gcd 找「最大長度」 → substr 取出答案。
*/