class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i = s.length() - 1;
        
        while(i >= 0) {
            if(s[i] != ' ') {
                break;
            }
            i--;
        }

        int j = i;

       
        while(j >= 0) {
            if(s[j] == ' ') {
                break;
            }
            j--;
        }

        return i - j;
    }
};