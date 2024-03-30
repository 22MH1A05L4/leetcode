class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return countSubarrays(nums, k) - countSubarrays(nums, k - 1);
    }

private:
    int countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> count;
        int distinct = 0;
        int left = 0;
        int goodSubarrays = 0;

        for (int right = 0; right < n; right++) {
            if (count[nums[right]] == 0) {
                distinct++;
            }
            count[nums[right]]++;

            while (distinct > k) {
                count[nums[left]]--;
                if (count[nums[left]] == 0) {
                    distinct--;
                }
                left++;
            }

            goodSubarrays += right - left + 1;
        }

        return goodSubarrays;
    }
};
