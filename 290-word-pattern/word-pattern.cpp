class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;
        istringstream iss(s);
        string word;
        int i = 0;

        for (; iss >> word; ++i) {
            if(i >= pattern.size()) return false;
            char c = pattern[i];
            if(charToWord.count(c) && charToWord[c] != word)
                return false;
            if(wordToChar.count(word) && wordToChar[word] != c)
                return false;
            charToWord[c] = word;
            wordToChar[word] = c;
        }
        return i == pattern.size();
    }
};
