class Solution {
public:
    int fib[46];
    int climbStairs(int n) {
        if(fib[n]!=0)
            return fib[n];
        
        if(n==1||n==2)
        {
            return n;
        }
        fib[n]= climbStairs(n-1)+climbStairs(n-2);
        return fib[n];
    }
};