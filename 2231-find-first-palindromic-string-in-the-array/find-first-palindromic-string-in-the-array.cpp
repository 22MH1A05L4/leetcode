class Solution {
public:
    bool ispalindromic(const string& s){
        int left =0;
        int right = s.length()-1;
        while(left <right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words){
        for(const string& word : words){
            if(ispalindromic(word)){
                return word;
            }
        }
        return "";
    }
};