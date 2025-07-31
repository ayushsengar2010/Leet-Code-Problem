class Solution {
public:
    vector<int> normalize(const string &str) {
        unordered_map<char, int> indexMap;
        vector<int> result;
        int idx = 0;
        for (char c : str) {
            if (!indexMap.count(c))
                indexMap[c] = idx++;
            result.push_back(indexMap[c]);
        }
        return result;
    }
    bool isIsomorphic(string s, string t) {
        return normalize(s) == normalize(t);
    }
};
