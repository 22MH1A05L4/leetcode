class Solution:
    def smallestDistancePair(self, nums: List[int], k: int) -> int:
        nums.sort()
        left, right=0, nums[-1] - nums[0]
        while left<right:
            mid = (left+right)//2
            count,j=0,0

            for i in range(len(nums)):
                while j < len(nums) and nums[j]- nums[i] <= mid:
                    j += 1
                count += j-i-1

            if count >= k:
                right =mid 
            else:
                left= mid+1
        return left