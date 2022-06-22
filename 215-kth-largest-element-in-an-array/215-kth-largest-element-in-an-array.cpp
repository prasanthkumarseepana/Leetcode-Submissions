class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),count=0;
        
        
        int ans=nums[n-k];
        // while(count<k){
        //     for(int i=0;i<n-1;i++){
        //             if(nums[i]!=nums[i+1]){count++;ans=nums[i];}
        //         else continue;
        // }
        // }
        return ans;
        
    }
};