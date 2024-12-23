class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ans = []  # To store the indices

        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):  # Inner loop should iterate until the end
                if nums[i] + nums[j] == target:
                    ans.append(i)
                    ans.append(j)
                    return ans  # Return immediately after finding the pair

        return ans  # Return empty list if no solution is found
