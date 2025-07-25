class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charCount(26, 0);
        for (char c : chars) {
            charCount[c - 'a']++;
        }
        int totalLength = 0;
        for (const string& word : words) {
            vector<int> wordCount(26, 0);
            bool canForm = true;
            for (char c : word) {
                wordCount[c - 'a']++;
                if (wordCount[c - 'a'] > charCount[c - 'a']) {
                    canForm = false;
                    break;
                }
            }
            if (canForm) {
                totalLength += word.size();
            }
        }
        return totalLength;
    }
};
