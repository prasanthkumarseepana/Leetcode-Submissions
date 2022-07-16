class Solution {
public:
    
    int rob(vector<int>& nums) {
        int prev = 0;
        int curr = 0;
        int next = 0;
        int n=nums.size();
        
        for (int i = 0; i < n; i++) {
            next = max(prev + nums[i], curr);
            prev = curr;
            curr = next;
        }
        
        return curr;
    }
};