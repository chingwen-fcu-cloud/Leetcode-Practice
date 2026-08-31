class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0){
            return false;
        }
        return fmod(log(n) / log(4), 1.0) == 0.0;
    }
};

/*
log(n) / log(4) => 求 n 对于 4 的对数
fmod => 取小数部分
如果小数部分为 0，则 n 是 4 的幂
fmod()、log() 需標頭檔 #include <cmath>
整個也可以寫成 return n > 0 and (n & (n - 1)) == 0 and (n & 0x55555555) != 0
(n & (n - 1)) == 0 => n 是 2 的幂
(n & 0x55555555) != 0 => n 的 1 位在奇數位置
*/
