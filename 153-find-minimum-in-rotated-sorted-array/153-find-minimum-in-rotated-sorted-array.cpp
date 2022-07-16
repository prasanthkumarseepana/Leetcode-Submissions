class Solution {
public:
    int findMin(vector<int>& num) {
         int start=0,end=num.size()-1;
        
        while (start<end) {
            if (num[start]<num[end])
                return num[start];//Comparing if 1st element<last element means sorted
            
            int mid = (start+end)/2;//Calculating mid
            
            if (num[mid]>=num[start]) {
                start = mid+1;//If mid>start, move to 2nd half
            } else {
                end = mid;
            }
        }
        
        return num[start];
    }
};