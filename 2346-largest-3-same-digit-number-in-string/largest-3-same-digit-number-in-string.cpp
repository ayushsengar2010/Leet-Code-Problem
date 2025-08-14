class Solution {
public:
    string largestGoodInteger(string num) {
        string result = "";
        for(int i = 0; i < num.size() - 2; ++i){
            if(num[i] == num[i+1] && num[i] == num[i+2]){
                string triplet = num.substr(i, 3);
                result = max(result, triplet);
            }
        }
        return result;
    }
};
