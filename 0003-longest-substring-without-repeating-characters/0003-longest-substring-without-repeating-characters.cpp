class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int start = 0;
        int maxi = 0;

        int freq[256] = {0};

        for(int end = 0; end < s.length(); end++) {

            freq[s[end]]++;

            while(freq[s[end]] > 1) {

                freq[s[start]]--;
                start++;
            }

            maxi = max(maxi, end - start + 1);
        }

        return maxi;
    }
};