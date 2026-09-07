class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start = 0;
        int end = 0;
        int maxi = INT_MIN;
        int sum = 0;

        while( end < nums.size()){
            sum = sum + nums[end];

            if( end - start + 1 < k){
                end++;
            }
            else if( end - start + 1 == k){
                maxi = max( maxi , sum);
                sum = sum - nums[start];
                start++;
                end++;
            }
        }
        return (double) maxi / k;
    }
};