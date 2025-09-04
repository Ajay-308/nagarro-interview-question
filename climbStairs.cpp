#include <vector>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1);
        // n=5 
        // 1 + 1 + 1+ 1+1;
        //1+1+1+2;
        // 1+2+2;
        // 2+1+2;
        // 2+2+1;
        if(n<=2) return n;
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[n-1] + dp[n-2];
        }
        return dp[n];
        
    }
};