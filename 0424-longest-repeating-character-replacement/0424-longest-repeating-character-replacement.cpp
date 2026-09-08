class Solution {
public:
    int characterReplacement(string s, int k) {

        int start = 0;
        int maxi = 0;

        int freq[26] = {0};

        for(int end = 0; end < s.length(); end++) {

            freq[s[end] - 'A']++;

            int maxFreq = 0;

            for(int i = 0; i < 26; i++) {
                maxFreq = max(maxFreq, freq[i]);
            }

            int change = (end - start + 1) - maxFreq;

            while(change > k) {

                freq[s[start] - 'A']--;

                start++;

                maxFreq = 0;

                for(int i = 0; i < 26; i++) {
                    maxFreq = max(maxFreq, freq[i]);
                }

                change = (end - start + 1) - maxFreq;
            }

            maxi = max(maxi, end - start + 1);
        }

        return maxi;
    }
};