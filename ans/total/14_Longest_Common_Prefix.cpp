class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = strs[0];
        string result = "";
        for(int i = 0; i < common.length(); i++){
            bool judge = true;
            for(int j = 1; j < strs.size(); j++){
                if(common[i] != strs[j][i]){
                    judge = false;
                    break;
                }
            }
            if(judge == true){
                result += common[i];
            }
            else{
                break;
            }
        }
        return result;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string pref = strs[0];
        int prefLen = pref.length();

        for (int i = 1; i < strs.size(); i++) {
            string s = strs[i];
            while (prefLen > s.length() || pref != s.substr(0, prefLen)) {
                prefLen--;
                if (prefLen == 0) {
                    return "";
                }
                pref = pref.substr(0, prefLen);
            }
        }

        return pref;        
    }
};