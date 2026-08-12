class Solution {
public:
int fun(vector<int> &weights , int capacity){
    int days = 1;
    int sum = 0;

    for(int i = 0 ; i < weights.size() ; i++){
        if(sum + weights[i] <= capacity){
            sum += weights[i];
        }else{
            days++;
            sum = weights[i];
        }
    }
    return days;
}
    int shipWithinDays(vector<int>& weights, int days) {

        int start = *max_element(weights.begin() , weights.end());
        int end = 0;

        for(int i = 0 ; i < weights.size() ; i++){
            end += weights[i];
        }
        int ans = -1;

        while(start <= end){
            int mid = start + (end - start) / 2;
            int requiredDays = fun(weights , mid);
            if(requiredDays > days){
                start = mid + 1;
            }else{
                ans = mid ;
                end = mid - 1;
            }
        }
        return ans;
        
    }
};