class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long reverse = 0;
        int x_temp = x;
        
        while(x_temp > 0){
            reverse = (x_temp % 10) + (reverse * 10);
            x_temp/=10;
        }
        return (reverse == x);
    }
};