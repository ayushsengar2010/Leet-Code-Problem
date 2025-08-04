class Solution {
public:
    string reverseWords(string sentence) {
        int length= sentence.length();
        int wordStart= 0;
        for(int i=0; i<=length; ++i){
            if(i == length || sentence[i] == ' '){
                reverse(sentence.begin() + wordStart, sentence.begin() + i);
                wordStart=i + 1;
            }
        }
        return sentence;
    }
};
