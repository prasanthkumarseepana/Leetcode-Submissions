class Solution {
    public:
void findCombination(int ind, int target, vector<int> &arr,vector<vector<int>> &ans,vector <int> & ds) {
      if (ind == arr.size()) {//Base case- Have reached last index 
        if (target == 0) {//Whether target reached 
          ans.push_back(ds);//Then add that combination to answer
        }
        return;//No need for further recursion
      }
      // pick up the element 
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);//Add that element to ds
        findCombination(ind, target - arr[ind], arr, ans, ds);//Recursion call to satisfy remainder target
        ds.pop_back();
      }

      findCombination(ind + 1, target, arr, ans, ds);//Then move to next index and start from there as target hasnt been reached

    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector < vector < int >> ans;//Vector for combinations
      vector < int > ds;//Data structure which will be used in recursion calls
      findCombination(0, target, candidates, ans, ds);// Recursion Call
      return ans;
    }
};