class Solution {
public:
int solve(vector<int>& nums , int index){
    if(index >= nums.size()){
        return 0;
    }
    int includeAns = nums[index] + solve(nums , index + 2);
    int excludeAns = 0 + solve(nums , index + 1);
    int finalAns = max(includeAns , excludeAns);
    return finalAns;
}
int solveUsingMem(vector<int>& nums , int index , vector<int>&dp){
    if(index >= nums.size()){
        return 0;
    }
    if(dp[index] != -1){
        return dp[index];
    }

    int includeAns = nums[index] + solveUsingMem(nums , index + 2,dp);

    int excludeAns = solveUsingMem(nums , index + 1 , dp);
    dp[index] = max(includeAns , excludeAns);
    return dp[index];
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n + 100, -1);
        int index = 0;
        int ans = solveUsingMem(nums,index,dp);
        return ans;
        
    }
};