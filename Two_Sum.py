class Solution:
    def twoSum(self, nums, target):
        self.nums = nums
        self.target = target
        for i in range(len(nums)):
            for j in range(len(nums)):
                if j == i :
                    pass
                else:
                    s = nums[i] + nums[j]
                    if s == target:
                        return i,j
                    else:
                        pass


   
