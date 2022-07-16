class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>result(n+1,0);//Resultant array
        for(int i=1;i<=n;i++){
        result[i]=result[i/2]+i%2; //Number of sets in a number= num of set bits in half of that num +1/0(odd/evem)
        }
        return result;
    }
};

//An example of DP as the first result is used repetitively
/* Ex-5
        5/2=2           2 has 1 set bit
        so 1+1=2 set bits in 5*/