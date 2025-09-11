class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        size = len(nums)
        output = []
        for i in range(size): 
            j = i + 1
            while j < size: 
                if (nums[i] + nums[j] == target): 
                    output.append(i)
                    output.append(j)
                    break
                j += 1
        return output