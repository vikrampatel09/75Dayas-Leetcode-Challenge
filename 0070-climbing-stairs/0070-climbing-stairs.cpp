class Solution {
public:
// int solve(int n ){
//     if(n == 0){
//         return 1;
//     }
//     if( n == 1){
//         return 1;
//     }
//    int ans =  solve( n-1 ) + solve(n - 2);
//    return ans;
// }
int solveUsingMem(int n , vector<int>&dp){
    if(n == 0){
        return 1;
    }
    if( n == 1){
        return 1;
    }
    if( dp[n] != -1){
        return dp[n];
    }
   int ans =  solveUsingMem( n-1,dp) + solveUsingMem(n - 2 , dp);
   dp[n] = ans;
   return dp[n];


}
    int climbStairs(int n) {
        vector<int>dp(n + 100 , -1);
        int ans = solveUsingMem(n , dp);
        return ans;
    }
};