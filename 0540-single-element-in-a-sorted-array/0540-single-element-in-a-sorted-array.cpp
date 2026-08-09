class Solution {
public:

    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        if (n == 1)
            return nums[0];

        int start = 0;
        int end = n - 1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            // Single element at first position
            if (mid == 0 && nums[0] != nums[1])
                return nums[mid];

            // Single element at last position
            if (mid == n - 1 && nums[n - 1] != nums[n - 2])
                return nums[mid];

            // mid itself is single
            if (nums[mid - 1] != nums[mid] &&
                nums[mid] != nums[mid + 1])
                return nums[mid];

            // mid is even
            if (mid % 2 == 0) {

                if (nums[mid - 1] == nums[mid]) {
                    // Pair is on left
                    end = mid - 1;
                }
                else {
                    // Pair is on right
                    start = mid + 1;
                }
            }

            // mid is odd
            else {

                if (nums[mid - 1] == nums[mid]) {
                    // Pair is on left, so single is on right
                    start = mid + 1;
                }
                else {
                    // Pair is on right, so single is on left
                    end = mid - 1;   
                }
            }
        }

        return -1;
    }
};