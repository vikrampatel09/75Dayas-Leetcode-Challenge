class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int start = 0;
        int sum = 0;
        int mini = INT_MAX;

        for(int end = 0; end < nums.size(); end++) {

            sum += nums[end];

            while(sum >= target) {

                int length = end - start + 1;

                mini = min(mini, length);

                sum -= nums[start];

                start++;
            }
        }

        if(mini == INT_MAX)
            return 0;

        return mini;
    }
};