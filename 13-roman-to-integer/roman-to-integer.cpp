class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        for (int i = 0; i < s.size(); ++i) {
            int val = value(s[i]);
            if (i + 1 < s.size() && val < value(s[i + 1])) {
                total -= val;
            } else {
                total += val;
            }
        }
        return total;
    }

    int value(char ch) {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};
