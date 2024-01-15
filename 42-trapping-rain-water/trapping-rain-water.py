class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)
        left =0
        right=n-1

        left_max = -1
        right_max = -1
        trapped_water = 0

        while left < right:    
            if height[left] <= height[right]:
                left_max = max(left_max,height[left])
                trapped_water += left_max-height[left]
                left +=1
            else:
                right_max = max(right_max,height[right])
                trapped_water += right_max-height[right]
                right -=1
        return trapped_water
             