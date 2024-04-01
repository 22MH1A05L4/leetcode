class Solution {
public:
    int lengthOfLastWord(string s) {
            int length = 0;
    bool foundWord = false;

    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            length++;
            foundWord = true;
        } else if (foundWord) {
            break; // Stop counting if we encounter a space after finding the last word
        }
    }

    return length;
    }
};