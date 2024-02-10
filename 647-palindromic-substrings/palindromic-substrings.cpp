class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int count = 0;
        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
            count++;
        }
        for (int k = 1; k < n; k++) {
            for (int i = 0; i < n - k; i++) {
                int j = i + k;
                if (s[i] == s[j] && k == 1) {
                    dp[i][j] = true;
                    count++;
                } else if (s[i] == s[j] && k > 1 && dp[i+1][j-1]) {
                    dp[i][j] = true;
                    count++;
                }
            }
        }
        
        return count;
    }
};