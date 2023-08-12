class Solution {
public:
    int findMin(vector<int>& nums) {
        // 12/09/2023
        int start = 0, end = nums.size()-1;
        int ans = nums[0];
        while (start <= end) {
            int mid = (start+end)/2;
            if (nums[mid] <= nums[end]) {
                ans = (ans < nums[mid])? ans : nums[mid];
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }
        return ans;
    }
};