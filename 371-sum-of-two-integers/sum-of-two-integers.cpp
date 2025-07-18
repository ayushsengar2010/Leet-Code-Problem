class Solution {
public:
    // Bit Manipulation
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned carry = (unsigned)(a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }
};
