class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;//Taking set as it stores unique elements
    
		int i = 0, j = 0, n = s.size(), ans = 0;//i is for outer loo and j for substring
    
		while( i<n && j<n)
		{
			if(set.find(s[j]) == set.end()) //If the character is not in set
			{
				set.insert(s[j++]); //Insert the character in set and update the j counter
				ans = max(ans, j-i); //Check if the new distance is longer than the current answer
			}
			else
			{
				set.erase(s[i++]); 
				/*If character does exist in the set, ie. it is a repeated character, 
				we update the outer loop iterator */
			}
		}
    
		return ans;
        
        
    }
};