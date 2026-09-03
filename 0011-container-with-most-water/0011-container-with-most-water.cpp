class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxWater = 0;

        int left = 0;
        int right = height.size() - 1;

        while (left < right) {

            int width = right - left;

            int containerHeight = min(height[left], height[right]);

            int currentWater = width * containerHeight;

            maxWater = max(maxWater, currentWater);

            // Chhoti height wali line ko move karna hai
            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return maxWater;
    }
};