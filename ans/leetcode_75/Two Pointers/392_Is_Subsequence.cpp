class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_p = 0;
        int t_p = 0;
        while(s_p < s.length() && t_p < t.length()){
            if(s[s_p] == t[t_p]){
                s_p++;
            }
            t_p++;
        }
        return s_p == s.length();
    }
};