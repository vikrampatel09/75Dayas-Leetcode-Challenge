class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()){
            return 0;
        }

        sort(nums.begin() , nums.end());
        int currentlength = 1;
        int maxlength = 1;

        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] == nums[i - 1]){
                continue;
            }
            if(nums[i] == nums[i - 1] + 1){
                currentlength++;
            }
            else{
                currentlength = 1;
            }
            maxlength = max( currentlength , maxlength);
        }
        return maxlength;
    }
};