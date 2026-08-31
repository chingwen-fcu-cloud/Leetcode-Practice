class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t num = n;
        int count = 0;
        while(num > 0){
            count += (num & 1);
            num >>= 1;
        }
        return count;
    }
};

/*
數學運算	Bit operation
num % 2 	num & 1
num /= 2	num >>= 1
*/