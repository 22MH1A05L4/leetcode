class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustCount(n + 1, 0);
        for (const auto& pair : trust) {
            int a = pair[0];
            int b = pair[1];
            trustCount[a]--;
            trustCount[b]++;
        }
        for (int i = 1; i <= n; ++i) {
            if (trustCount[i] == n - 1) {
                return i;
            }
        }
        
        // If no such person exists, return -1
        return -1;
    }
};