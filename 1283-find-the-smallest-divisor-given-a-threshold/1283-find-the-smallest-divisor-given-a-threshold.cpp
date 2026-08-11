class Solution {
public:

int fun(vector<int> &nums, int divisor){
    long long sum = 0;
    for(int i = 0 ; i < nums.size() ; i++){
        sum += (nums[i] + divisor - 1) / divisor;
    }
    return sum;

}

    int smallestDivisor(vector<int>& nums, int threshold) {

        int n = nums.size();
        int start = 1;
        int end = *max_element(nums.begin() , nums.end());
        int ans = -1;;

        while(start <= end){
            int mid = start + ( end - start) / 2;
            long long sum = fun(nums,mid);
            if(sum > threshold){
                start = mid + 1;
            }else{
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
        
    }
};