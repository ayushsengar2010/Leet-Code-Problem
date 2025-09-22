class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        int maxFreq = 0;
        for (auto& entry : freq) {
            maxFreq = max(maxFreq, entry.second);
        }
        int result = 0;
        for (auto& entry : freq) {
            if (entry.second == maxFreq) {
                result += entry.second;
            }
        }
        return result;
    }
};
