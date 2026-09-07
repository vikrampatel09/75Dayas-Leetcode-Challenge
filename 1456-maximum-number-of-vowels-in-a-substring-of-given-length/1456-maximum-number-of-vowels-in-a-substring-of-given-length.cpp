class Solution {
public:
    int maxVowels(string s, int k) {
        int start = 0;
        int end = 0;
        int maxi = INT_MIN;
        int count = 0;
        
        while( end < s.length()){
           if( s[end] == 'a' || s[end] =='e' || s[end]=='i' || s[end]=='o' || s[end]=='u'){
            count++;
           }

            if( end - start + 1 < k){
                end++;
            }

            else if( end - start + 1 == k){
                maxi = max( maxi , count);

                 if (s[start] == 'a' || s[start] == 'e' ||
                    s[start] == 'i' || s[start] == 'o' ||
                    s[start] == 'u') {

                    count--;
                }

                start++;
                end++;

            }
        }
        return maxi;
    }
};