class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int countZeros = 0; // Count of zeros in the current window
        int maxOnes = 0;

        while (j < nums.size()) {
            if (nums[j] == 0) {
                countZeros++;
            }
            while (countZeros > k) {
                if (nums[i] == 0) {
                    countZeros--;
                }
                i++;
            }
            maxOnes = max(maxOnes, j - i + 1);

            j++;
        }

        return maxOnes;
    }
};