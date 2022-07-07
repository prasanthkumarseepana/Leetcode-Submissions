class Solution {
public:
    int fib(int n) {
    int f[n + 2];//Using dynamic programming
    f[0] = 0;
    f[1] = 1;
 
    for(int i = 2; i <= n; i++)
    {
        
       f[i] = f[i - 1] + f[i - 2];//Add the previous 2 number in the series and store it
    }
    return f[n];
    }
};