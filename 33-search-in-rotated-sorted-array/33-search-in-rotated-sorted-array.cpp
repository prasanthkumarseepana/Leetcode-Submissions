class Solution {
public:
    int search(vector<int>& nums, int target) {//Using Binary search
        int low=0,high=nums.size()-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[low] <= nums[mid]) {//If array is sorted till mid
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1;//Target lies on left side
                } else {
                    low = mid + 1;//Target lies on right side
                }
            } else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        
        return -1;
    }
};