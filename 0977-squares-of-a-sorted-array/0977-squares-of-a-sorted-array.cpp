class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int>ans;
        int n = nums.size();
        int square = 0;
        for(int i = 0 ; i < nums.size() ; i++){
             square = nums[i] * nums[i];
             ans.push_back(square);
        }
    sort(ans.begin() , ans.end());
        return ans;
    }
    
};