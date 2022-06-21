class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans=0;
        for(auto x:t)ans+=x;
        for(auto x:s)ans-=x;
        //Adding up the corresponding ASCII values of big string then subtracting from smaller string
        return char(ans);
    }
};