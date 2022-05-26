class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxprofit=0;//initialize maximum profit as 0
        int minPrice=INT_MAX;//intialize min price as max integer so we update it in loop
        for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);//take min of each index and last minprice 
            maxprofit=max(maxprofit,prices[i]-minPrice);//max of last maxprofit & new profit
        }
        return maxprofit;
        
    }
};