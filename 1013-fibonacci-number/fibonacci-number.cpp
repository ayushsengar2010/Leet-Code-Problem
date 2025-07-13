class Solution {
public:
    int fib(int n) {
        // Memoization (Top-Down DP)
        vector<int> memo(n + 1, -1);
        return fibMemo(n, memo);
    }
    int fibMemo(int n, vector<int>& memo) {
        if (n <= 1) return n;
        if (memo[n] != -1) return memo[n];
        memo[n] = fibMemo(n - 1, memo) + fibMemo(n - 2, memo);
        return memo[n];
    }
};
