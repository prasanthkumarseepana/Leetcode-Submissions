class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int curr = nums[0];//Sum of current subarray
        int result = nums[0];//Max of all subarrays till now
        
        for (int i = 1; i < nums.size(); i++) {
            curr = max(curr + nums[i], nums[i]);
            result = max(result, curr);
        }
        
        return result;
        
        
    }
};