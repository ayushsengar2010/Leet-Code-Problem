class Solution {
public:

    int totalMoney(int n) {
        int w = n / 7;
        int d = n % 7;
        int ans = 28 * w + 7 * (w * (w - 1) / 2);
        int s = 1 + w;
        ans += d * s + (d * (d - 1)) / 2;
        return ans;
    }
};
