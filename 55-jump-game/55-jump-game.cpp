class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
    int step=nums[0];
    for(int i=1;i<n;++i){
        step--;
        if(step<0)
           return false;//if not able to move forward(step=0)
        if(nums[i]>step)
           step=nums[i];//considering largest step size
    }
    return true;
    }
};