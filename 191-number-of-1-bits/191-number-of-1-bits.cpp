class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bit=0,res=0;
        
        while(n!=0){
            bit=n&1;//AND operator b/w number and 1 to get last digit
            if(bit==1)res++;
            n=n>>1;//Right shifting whole number by 1 digit to get next last digit
                       
        }
        return res;
    }
};