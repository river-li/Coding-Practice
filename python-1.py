class Solution(object):
    def twoSum(self,num,target):
        """
        :type nums:List[int]
        :type target: int
        :rtype :List[int]
        """
        for i in range(len(nums)):
            for j in range(i):
                if nums[i]+nums[j]==target:
                    return [j,i]
