class Solution {
public:

    const int mod = 1000000007;

    int solveUsingMem(int n, int k, int target,
                      vector<vector<long long>>& dp) {


        if (n < 0 || target < 0) {
            return 0;
        }

        
        if (n == 0 && target == 0) {
            return 1;
        }

        
        if (n == 0 && target != 0) {
            return 0;
        }

       
        if (n != 0 && target == 0) {
            return 0;
        }

        
        if (dp[n][target] != -1) {
            return dp[n][target];
        }

        long long ans = 0;

        for (int val = 1; val <= k; val++) {

            ans = (ans % mod +
                   solveUsingMem(n - 1, k, target - val, dp) % mod)
                  % mod;
        }

        dp[n][target] = ans;

        return ans;
    }


    int numRollsToTarget(int n, int k, int target) {

        vector<vector<long long>> dp(
            n + 1,
            vector<long long>(target + 1, -1)
        );

        int ans = solveUsingMem(n, k, target, dp);

        return ans;
    }
};