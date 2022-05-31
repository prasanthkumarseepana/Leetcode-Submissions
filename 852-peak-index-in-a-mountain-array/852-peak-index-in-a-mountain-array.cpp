class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
                                                                    // Binary Search
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;// Initialsing end and start indexes and mid index as well
        
        while(s<e){//until s=e
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }//if mid on increasing side, shift start to ahead of mid
            else{
                e=mid;
            }//if mid on decreasing side, shift start to mid
            mid=s+(e-s)/2;
        }
        return s;//happens when s=e, this ends up at highest element
    }
};