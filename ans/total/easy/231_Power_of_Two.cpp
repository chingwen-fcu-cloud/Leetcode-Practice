class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && !(n & n-1);
    }
};

/*
n & (n - 1) => 消掉最右邊的 1
*/