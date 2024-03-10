class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        set1 = set(nums1)
        set2 = set(nums2)
        
        # Find the smaller set to iterate through
        smaller_set = set1 if len(set1) < len(set2) else set2
        larger_set = set2 if smaller_set == set1 else set1
        
        result_set = set()
        
        # Iterate through the smaller set
        for num in smaller_set:
            # Check if the element exists in the other set
            if num in larger_set:
                result_set.add(num)
        
        return list(result_set)
