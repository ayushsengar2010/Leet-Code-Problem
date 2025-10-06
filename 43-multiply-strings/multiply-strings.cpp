class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        int len1 = num1.size(), len2 = num2.size();
        vector<int> res(len1 + len2, 0);
        
        for (int i = len1 - 1; i >= 0; --i) {
            for (int j = len2 - 1; j >= 0; --j) {
                int prod = (num1[i] - '0') * (num2[j] - '0');
                int sum = prod + res[i + j + 1];
                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }
        
        string result = "";
        for (int r : res) {
            if (!(result.empty() && r == 0)) {
                result += to_string(r);
            }
        }
        
        return result;
    }
};
