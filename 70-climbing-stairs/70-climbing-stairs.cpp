class Solution {
public:
    int climbStairs(int n) {
        
        if(n<=2)return n;
        
        int prev=2,prev2=1,res;//Indicates whether last step was a single or double
        for(int i=3;i<=n;i++){
            res=prev+prev2;
            prev2=prev;
            prev=res;
//Then we update these variables which denote how many steps it took to reach the step before
        }
        return res;
    }
};