class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int start = 0;
        int end = 0 ;
        int sum = 0;
        int count = 0;
        int average = 0;

        while( end < arr.size()){
            sum = sum + arr[end];

            if( end - start + 1 < k){
                end++;
            }
            else if( end - start + 1 == k){
                 average = sum / k;
                 if( average >= threshold){
                    count++;
                 }
                 sum = sum - arr[start];
                 start++;
                 end++;
                
            }
        }
        return count;
        
    }
};