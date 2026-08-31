class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0;
        for(int i = 0; i < 32; i++){
            rev <<= 1;
            rev |= (n & 1);
            n >>= 1;
        }
        return rev;
    }
};

/*
res <<= 1;      // 結果往左移
res |= (n & 1); // 把 n 最右邊的 bit 放進去
n >>= 1;        // n 往右移
*/