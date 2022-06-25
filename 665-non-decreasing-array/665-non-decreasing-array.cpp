class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
       int cnt = 0;                         
        for(int i = 1; i < nums.size() && cnt<=1 ; i++){
        if(nums[i-1] > nums[i]){
                cnt++;                  // If decreasing, then count++
        if(i-2<0 || nums[i-2] <= nums[i])nums[i-1] = nums[i];    
            //Making the previous element(i-1) bigger for increasing order
            
        else nums[i] = nums[i-1];    
            //If element smaller than prev element then make equal to prev      
            
            }
        }
        return cnt<=1;
    }
};
