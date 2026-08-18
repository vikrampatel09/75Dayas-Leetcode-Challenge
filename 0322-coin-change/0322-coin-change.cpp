class Solution {
public:
int solveUsingMem( vector<int>&coins , int amount , vector<int>&dp){
    if(amount == 0){
        return 0;
    }
    if(dp[amount] != -1){
        return dp[amount];
    }
    int mini = INT_MAX;
    for(int i = 0 ; i < coins.size() ; i++){

        if(coins[i] <= amount){
            int recursionKaAns = solveUsingMem(coins , amount - coins[i] , dp);
            if(recursionKaAns != INT_MAX){
                mini = min(mini , 1 + recursionKaAns);
            }
        }
    }
    dp[amount] = mini;
    return mini;
}
    int coinChange(vector<int>& coins, int amount) {

        int n = amount;
        vector<int>dp(n+1 , - 1);
        int ans = solveUsingMem(coins , amount , dp);
        if( ans == INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};