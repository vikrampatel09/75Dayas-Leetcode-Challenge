class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int start = 0;
        int zeroCount = 0;
        int maxi = 0;

        for(int end = 0; end < nums.size(); end++) {

            // Agar current element 0 hai
            if(nums[end] == 0) {
                zeroCount++;
            }

            // Agar zeros k se zyada ho gaye
            while(zeroCount > k) {

                // Agar start wala element 0 hai
                if(nums[start] == 0) {
                    zeroCount--;
                }

                start++;
            }

            // Current window ki length
            int length = end - start + 1;

            // Maximum length store karo
            maxi = max(maxi, length);
        }

        return maxi;
    }
};