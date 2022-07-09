class Solution {
public:
    bool isPalindrome(string s) {
        // isalnum used to check whether string has alphanumeric characters
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            while (isalnum(s[i]) == false && i < j) i++;
            while (isalnum(s[j]) == false && i < j) j--;//Moving forward/back if not alphanumeric
            if (toupper(s[i]) != toupper(s[j])) return false;//Checking if character is equal
        }
        return true;
        
    }
};