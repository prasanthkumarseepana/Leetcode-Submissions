class Solution {
public:
    char findTheDifference(string s, string t) {
        // We can actually do XOR for char too, so this is simplest apart from sorting
        char d=0;
        for(char cs:s)d=d^cs;
        for(char ct:t)d=d^ct;
        
        return d;
    }
};