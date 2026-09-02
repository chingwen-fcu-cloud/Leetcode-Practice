class Solution {
public:
    bool isPalindrome(string s) {
        string alnums;
        for(char c : s){
            if(isalnum(c)){
                alnums += tolower(c);
            }
        }
        int left = 0;
        int right = alnums.length() - 1;
        while(left < right){
            if(alnums[left] == alnums[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

/*
標頭檔：#include <cctype>（C 為 <ctype.h>）
函數簽章：int isalnum(int c);
參數：要檢查的字元 c（通常傳入 char，會自動轉為 int）返回值：如果字元是字母（A-Z, a-z）或數字（0-9），則回傳非零值（代表 True）；否則回傳 0（代表 False）
*/